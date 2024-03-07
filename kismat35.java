import java.awt.GridBagConstraints;
import java.awt.GridBagLayout;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class help {
    JLabel lbl;

    private class ItemListenerImpl implements ItemListener {
        public void itemStateChanged(ItemEvent e) {
            lbl.setText("Your favorite language is " + ((JRadioButton) e.getItem()).getText());
        }
    }

    public void run() {
        JFrame frame = new JFrame("Gridbag");
        frame.setSize(500, 500);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new GridBagLayout());
        GridBagConstraints c = new GridBagConstraints();

        JLabel lbl1 = new JLabel("Name ");
        c.gridx = 0;
        c.gridy = 0;
        c.gridwidth = 1;
        c.insets = new Insets(0, 20, 0, 20);
        c.weightx = 0;
        c.weighty = 0.25;
        frame.add(lbl1, c);

        JTextField txtName = new JTextField(80);
        c.gridx = 1;
        c.gridy = 0;
        c.gridwidth = 2;
        c.weightx = 1;
        c.weighty = 0.25;
        c.insets = new Insets(0, 0, 0, 20);
        c.fill = GridBagConstraints.HORIZONTAL;
        frame.add(txtName, c);

        JLabel lblPasswd = new JLabel("Password ");
        c.gridx = 0;
        c.gridy = 1;
        c.gridwidth = 1;
        c.fill = GridBagConstraints.HORIZONTAL;
        c.weightx = 0;
        c.weighty = 0.25;
        c.insets = new Insets(0, 20, 0, 20);
        frame.add(lblPasswd, c);

        JTextField txtPasswd = new JTextField(80);
        c.gridx = 1;
        c.gridy = 1;
        c.gridwidth = 2;
        c.weightx = 1;
        c.weighty = 0.25;
        c.ipadx = 230;
        c.insets = new Insets(0, 0, 0, 20);
        c.fill = GridBagConstraints.HORIZONTAL;
        frame.add(txtPasswd, c);

        JLabel lblPrompt = new JLabel("Select your favorite language:");
        c.gridx = 0;
        c.gridy = 2;
        c.gridwidth = 3;
        c.weightx = 1;
        c.weighty = 0.25;
        c.insets = new Insets(20, 20, 0, 0);
        c.fill = GridBagConstraints.HORIZONTAL;
        frame.add(lblPrompt, c);

        ButtonGroup choices = new ButtonGroup();
        
        JRadioButton rbJava = new JRadioButton("Java", true);
        c.gridx = 0;
        c.gridy = 3;
        c.gridwidth = 1;
        c.weightx = 0.33;
        c.weighty = 0.25;
        c.insets = new Insets(20, 20, 0, 10);
        c.fill = GridBagConstraints.BOTH;
        frame.add(rbJava, c);

        JRadioButton rbC = new JRadioButton("C", false);
        c.gridx = 1;
        c.gridy = 3;
        c.gridwidth = 1;
        c.weightx = 0.33;
        c.weighty = 0.25;
        c.insets = new Insets(20, 10, 0, 10);
        c.fill = GridBagConstraints.BOTH;
        frame.add(rbC, c);

        JRadioButton rbCpp = new JRadioButton("C++", false);
        c.gridx = 2;
        c.gridy = 3;
        c.gridwidth = 1;
        c.weightx = 0.33;
        c.weighty = 0.25;
        c.insets = new Insets(20, 10, 0, 20);
        c.fill = GridBagConstraints.BOTH;
        frame.add(rbCpp, c);

        ItemListenerImpl itemListener = new ItemListenerImpl();
        rbJava.addItemListener(itemListener);
        rbCpp.addItemListener(itemListener);
        rbC.addItemListener(itemListener);

        choices.add(rbJava);
        choices.add(rbC);
        choices.add(rbCpp);

        lbl = new JLabel("Your favorite language is Java");
        c.gridx = 0;
        c.gridy = 4;
        c.gridwidth = 3;
        c.weightx = 1;
        c.weighty = 0.25;
        c.insets = new Insets(20, 20, 0, 0);
        c.fill = GridBagConstraints.HORIZONTAL;
        frame.add(lbl, c);

        JButton resetBtn = new JButton("Reset");
        c.gridx = 0;
        c.gridy = 5;
        c.gridwidth = 1;
        c.weightx = 0.5;
        c.weighty = 0.25;
        c.insets = new Insets(20, 20, 0, 0);
        c.fill = GridBagConstraints.HORIZONTAL;
        frame.add(resetBtn, c);

        JButton submitBtn = new JButton("Submit");
        c.gridx = 2;
        c.gridy = 5;
        c.gridwidth = 1;
        c.weightx = 0.25;
        c.weighty = 0.25;
        c.insets = new Insets(20, 0, 0, 20);
        c.fill = GridBagConstraints.HORIZONTAL;
        frame.add(submitBtn, c);

        frame.setVisible(true);
    }
}

public class kismat35 {
    public static void main(String[] args) {
        help hp = new help();
        hp.run();
    }
}
