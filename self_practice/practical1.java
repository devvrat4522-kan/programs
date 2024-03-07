
import java.util.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

import javax.swing.JLabel;

class help {
    JLabel lbl1, lbl2, lbl3;
    JTextField txt1, txt2, txt3;
    JButton bt1, bt2;
    JLabel lbl;

    public void run() {
        JFrame frm = new JFrame("Frame 1");
        frm.setSize(500, 500);
        frm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frm.setLayout(new GridBagLayout());
        GridBagConstraints c = new GridBagConstraints();

        JLabel lbl1 = new JLabel("Name:");
        c.gridx = 0;
        c.gridy = 0;
        c.gridwidth = 1;
        c.fill = GridBagConstraints.HORIZONTAL;
        c.insets = new Insets(0, 20, 0, 20);
        c.weightx = 0;
        c.weighty = 0.25;
        frm.add(lbl1, c);

        txt1 = new JTextField(80);
        c.gridx = 1;
        c.gridy = 0;
        c.gridwidth = 2;
        c.weightx = 1;
        c.weighty = 0.25;
        c.insets = new Insets(0, 0, 0, 20);
        c.fill = GridBagConstraints.HORIZONTAL;
        frm.add(txt1, c);

        JLabel lbl2 = new JLabel("Password:");
        c.gridx = 0;
        c.gridy = 1;
        c.gridwidth = 1;
        c.fill = GridBagConstraints.HORIZONTAL;
        c.weightx = 0;
        c.weighty = 0.25;
        c.insets = new Insets(0, 20, 0, 20);
        frm.add(lbl2, c);

        JTextField txt2 = new JTextField(80);
        c.gridx = 1;
        c.gridy = 1;
        c.gridwidth = 2;
        c.weightx = 1;
        c.weighty = 0.25;
        c.ipadx = 230;
        c.insets = new Insets(0, 0, 0, 20);
        c.fill = GridBagConstraints.HORIZONTAL;
        frm.add(txt2, c);

        JLabel lbl3 = new JLabel("Repeat Password :");
        c.gridx = 0;
        c.gridy = 2;
        c.gridwidth = 1;
        c.fill = GridBagConstraints.HORIZONTAL;
        c.insets = new Insets(0, 20, 0, 20);
        c.weightx = 0;
        c.weighty = 0.25;
        frm.add(lbl3, c);

        JTextField txt3 = new JTextField(80);
        c.gridx = 2;
        c.gridy = 2;
        c.gridwidth = 2;
        c.weightx = 1;
        c.weighty = 0.25;
        c.ipadx = 230;
        c.insets = new Insets(0, 0, 0, 20);
        c.fill = GridBagConstraints.HORIZONTAL;
        frm.add(txt3, c);

        lbl = new JLabel("");
        c.gridx = 0;
        c.gridy = 3;
        c.gridwidth = 1;
        c.fill = GridBagConstraints.HORIZONTAL;
        c.insets = new Insets(0, 20, 0, 20);
        c.weightx = 0;
        c.weighty = 0.25;
        frm.add(lbl, c);

        bt1 = new JButton("Reset");
        bt2 = new JButton("Submit");

        c.gridx = 0;
        c.gridy = 5;
        c.gridwidth = 1;
        c.weightx = 0.25;
        c.weighty = 0.25;
        c.insets = new Insets(20, 20, 0, 20);
        c.fill = GridBagConstraints.HORIZONTAL;
        frm.add(bt1, c);

        c.gridx = 2;
        c.gridy = 5;
        c.gridwidth = 1;
        c.weightx = 0.25;
        c.weighty = 0.25;
        c.insets = new Insets(20, 20, 0, 20);
        c.fill = GridBagConstraints.HORIZONTAL;
        frm.add(bt2, c);

        bt1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                txt1.setText("");
                txt2.setText("");
                txt3.setText("");
            }
        });

        bt2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String st1 = txt2.getText();
                String st2 = txt3.getText();
                int f = 0;
                if (st1.length() != st2.length())
                    f = 1;
                else {
                    for (int i = 0; i < st1.length(); i++) {
                        if (st1.charAt(i) != st2.charAt(i)) {
                            f = 1;
                            break;
                        }
                    }
                }
                if (f == 1) {
                    lbl.setText("Two Passwords do not match");
                } else {
                    lbl.setText("Passwords done");
                }
            }
        });

        frm.setVisible(true);
    }
}

public class practical1 {
    public static void main(String[] args) {
        help hp = new help();
        hp.run();
    }
}
