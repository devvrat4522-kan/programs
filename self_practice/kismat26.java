
// JCheckBox
import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

class help implements ItemListener {

    JLabel jlabsel;
    JLabel jlabchange;
    JCheckBox jalpha;
    JCheckBox jbeta;
    JCheckBox jgamma;

    public void run() {
        JFrame frame = new JFrame("CheckBox Frame");
        frame.setLayout(new FlowLayout());
        frame.setSize(200, 200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        jlabsel = new JLabel("");
        jlabchange = new JLabel("");

        // checkboxes
        jalpha = new JCheckBox("Alpha");
        jbeta = new JCheckBox("Beta");
        jgamma = new JCheckBox("Gamma");

        jalpha.addItemListener(this);
        jbeta.addItemListener(this);
        jgamma.addItemListener(this);

        frame.add(jlabsel);
        frame.add(jalpha);
        frame.add(jbeta);
        frame.add(jgamma);
        frame.add(jlabsel);
        frame.add(jlabchange);

        frame.setVisible(true);

    }

    public void itemStateChanged(ItemEvent e) {
        String str = "";

        JCheckBox jb = (JCheckBox) e.getItem();
        if (jb.isSelected())
            jlabchange.setText(jb.getText() + " was selected");
        else
            jlabchange.setText(jb.getText() + " just cleared");

        if (jalpha.isSelected())
            str += "alpha";
        if (jbeta.isSelected())
            str += "beta";
        if (jgamma.isSelected())
            str += "gamma";

        jlabsel.setText("Selected checkBox : " + str);
    }
}

public class kismat26 {
    public static void main(String args[]) {
        help hp = new help();
        hp.run();
    }
}
