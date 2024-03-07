import javax.swing.event.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.*;

class help implements ActionListener {
    JLabel lbl = new JLabel("text");

    public void run() {

        JFrame frm = new JFrame(" Assignment frame ");

        frm.setLayout(new FlowLayout());
        frm.setSize(150, 200);
        frm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        lbl = new JLabel("text to be printed");

        JButton btn1 = new JButton("Right");
        JButton btn2 = new JButton("Left");

        btn1.addActionListener(this);
        btn2.addActionListener(this);

        frm.add(btn1);
        frm.add(btn2);

        frm.add(lbl);
        frm.setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getActionCommand().equals("Left"))
            lbl.setText("Left pressed ");
        else
            lbl.setText("Right pressed ");
    }
}

public class kismat29 {
    public static void main(String[] args) {
        help hp = new help();
        hp.run();
    }
}
