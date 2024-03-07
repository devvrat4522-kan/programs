import javax.swing.JFrame;
import java.awt.GridLayout;

public class frame1 {
    public void GridLayoutCode(){
    JFrame frame = new JFrame("testing gridlayout");
    frame.setSize(300,300);
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    frame.setLayout(new GridLayout(3,2));
    }
    public static void main(String[] args){
        GridLayoutCode();
    }
}
