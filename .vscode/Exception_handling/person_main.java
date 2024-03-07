// Creating our own exception
class NegativeAgeException extends Exception {
    public NegativeAgeException(String st) {
        System.out.println(st);
    }
}

class person extends Exception {
    private String st;
    private int age;

    person(String st, int age) throws NegativeAgeException {
        this.st = st;
        this.age = age;
        if (age < 0) {
            throw new NegativeAgeException("Invalid Age Exception");
        }
    }

    public void get1() {
        System.out.println("Name : " + st + " \n age : " + age);
    }
}

public class person_main {
    public static void main(String[] args) {
        try {
            person pt = new person("devvrat", 10);
            pt.get1();
            person pt1 = new person("Ganesha", -1);
            pt.get1();
        } catch (Exception e) {
            System.out.println("NegativeAgeException");
        }
    }
}
