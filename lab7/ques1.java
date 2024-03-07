import java.util.concurrent.atomic.AtomicLong;
class AdderThread extends Thread {
    private long start;
    private long end;
    private AtomicLong totalSum;
    public AdderThread(long start, long end, AtomicLong totalSum) {
        this.start = start;
        this.end = end;
        this.totalSum = totalSum;
    }
    @Override
    public void run() {
        long localSum = 0;
        for (long i = start; i <= end; i++) {
            localSum += i;
        }
        totalSum.addAndGet(localSum);
    }
}
public class ques1 {
    public static void main(String[] args) {
        long n = 100;
        long segmentSize = n / 8;
        long remainingNumbers = n % 8;
        AtomicLong totalSum = new AtomicLong(0);
        Thread[] threads = new Thread[8];
        for (int i = 0; i < 8; i++) {
            long start = i * segmentSize + 1;
            long end = start + segmentSize - 1;
            if (i == 7) {
                end += remainingNumbers;
            }
            threads[i] = new AdderThread(start, end, totalSum);
            threads[i].start();
        }
        for (Thread thread : threads) {
            try {
                thread.join();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        for (long i = n - remainingNumbers + 1; i <= n; i++) {
            totalSum.addAndGet(i);
        }
        System.out.println("Sum of numbers from 1 to " + n + " is: " + totalSum.get());
    }
}
