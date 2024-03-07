// textField

import java.awt.event.*;
import javax.swing.*;
import java.awt.*;

class help1 implements ActionListener {

    JTextField jtf;
    JLabel jlb;
    JButton button;
    JLabel jcont;

    public void run() {
        System.out.println(10 / 2);
        JFrame jfm = new JFrame("New Frame");
        jfm.setSize(300, 200);
        jfm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jfm.setLayout(new FlowLayout());

        jtf = new JTextField(10);
        jtf.setActionCommand("my first Txt");
        // it used so that there is no conflict with the action command associated
        // with the reverse push button.

        button = new JButton("Reverse");

        jtf.addActionListener(this);
        button.addActionListener(this);

        jlb = new JLabel("Enter the Text ");
        jcont = new JLabel("");

        jfm.add(jlb);
        jfm.add(jtf);
        jfm.add(button);
        jfm.add(jcont);

        jfm.setVisible(true);

    }

    public void actionPerformed(ActionEvent ae) {
        if (ae.getActionCommand().equals("Reverse")) {
            String org_str = jtf.getText();// getText is used for obtaining current text in text field
            String st = "";

            for (int i = org_str.length() - 1; i >= 0; i--)
                st += org_str.charAt(i);
            jtf.setText(st);
        } else
            jcont.setText("You pressed Enter. Text is : " + jtf.getText());
    }

}

public class kismat25 {
    public static void main(String[] args) {
        help1 hp = new help1();
        hp.run();
    }
}