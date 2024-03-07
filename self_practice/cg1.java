public class cg1 {
    public static int round(float n) { 
        if (n - (int) n < 0.5) 
            return (int) n; 
        return (int) (n + 1); 
    } 
  
  // Function for line generation 
  public static void DDALine(int x0, int y0, int x1, int y1) { 
  
    int dx = x1 - x0; 
    int dy = y1 - y0; 
  
    int step; 
  
    if (Math.abs(dx) > Math.abs(dy)) 
      step = Math.abs(dx); 
    else
      step = Math.abs(dy); 
  
    // Calculate x-increment and y-increment for each step 
    float x_incr = (float) dx / step; 
    float y_incr = (float) dy / step; 
  
    // Take the initial points as x and y 
    float x = x0; 
    float y = y0; 
  
    for (int i = 0; i < step; i++) { 
  
      // putpixel(round(x), round(y), WHITE); 
      System.out.println(round(x) + " " + round(y)); 
      x += x_incr; 
      y += y_incr; 
      // delay(10); s
    } 
  } 
 
  public static void main(String[] args) { 
  
    int x0 = 200, y0 = 180, x1 = 180, y1 = 160; 
  
    // Function call 
    DDALine(x0, y0, x1, y1); 
  
  } 
}
