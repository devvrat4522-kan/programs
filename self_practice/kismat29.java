import javax.swing.event.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class help {
    JFrame frm;
    JLabel label;

    public void run() {
        frm = new JFrame("New frame");

        frm.setLayout(new FlowLayout());
        frm.setSize(200, 200);
        frm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JButton bt1 = new JButton("Left");
        JButton bt2 = new JButton("Right");

        frm.add(bt1);
        frm.add(bt2);
        label = new JLabel("text");
        frm.add(label);

        frm.setVisible(true);

        bt1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                label.setText("Left pressed");
            }
        });
        bt2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                label.setText("Right pressed");
            }
        });
    }
}

public class kismat29 {
    public static void main(String[] args) {
        help hp = new help();
        hp.run();
    }
}
