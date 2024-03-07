import javax.swing.event.*;
import java.awt.*;
import javax.swing.*;

public class help {
    JCheckBox ch[] = new JCheckBox[3];

    public void run(){
        JFrame frm = new JFrame("frame");
        frm.setLayout(new FlowLayout);
        JLabel lb = new JLabel("A label ");
        frm.add(lb);

        JTextField txt = new JTextField(40);
        txt.setText("Default text");
        frm.add(txt);
        txt.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e){

            }
        });
    }
}

public class kismat28 {
    public static void main(String[] args) {
        help hp = new help();
        hp.run();
    }
}
