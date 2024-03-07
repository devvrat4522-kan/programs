import javax.swing.*;
// import javax.swing.event.*;
import java.awt.*;
import java.awt.event.*;

class help {
    JLabel lbl1, lbl3, lbl4, lbl5;
    JLabel lbl2;
    JTextField txt1;
    JTextField txt2;
    JButton bt1;
    JButton bt2;
    JRadioButton jrb1, jrb2;

    public void run() {

        JFrame frm = new JFrame("Login Page");
        frm.setSize(300, 200);
        frm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        lbl1 = new JLabel("Username");
        lbl2 = new JLabel("Password");
        lbl4 = new JLabel("C++");
        lbl5 = new JLabel("Java");

        frm.setLayout(new GridLayout(5, 2));
        txt1 = new JTextField(35);
        txt2 = new JTextField(35);
        bt1 = new JButton("Reset");
        bt2 = new JButton("Login");
        lbl3 = new JLabel("");
        jrb1 = new JRadioButton("C++");
        jrb2 = new JRadioButton("JAVA");

        // for selection and deselection of radio button
        ButtonGroup bg = new ButtonGroup();

        frm.add(lbl1);
        frm.add(txt1);
        frm.add(lbl2);
        frm.add(txt2);

        frm.add(bt1);
        frm.add(bt2);

        bg.add(jrb1);
        bg.add(jrb2);

        frm.add(jrb1);
        frm.add(jrb2);

        frm.add(lbl3);
        frm.setVisible(true);

        bt1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                txt1.setText("");
                txt2.setText("");
                lbl3.setText("Reset all entries");
            }
        });

        bt2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String st1 = txt1.getText();
                String st2 = txt2.getText();
                lbl3.setText(st1 + " has entered " + st2);
            }
        });

        jrb1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                lbl3.setText("C++ is favourite");
            }
        });

        jrb2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                lbl3.setText("Java is favourite");
            }
        });
    }
}

public class kismat30 {
    public static void main(String[] args) {
        help hp = new help();
        hp.run();
    }
}
