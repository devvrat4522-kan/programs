
import java.awt.*;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.SwingUtilities;

public class kulahad {
    public static void run() {
        JFrame frm = new JFrame("frame1");
        frm.setSize(300, 300);
        frm.setLayout(new GridBagLayout());
        frm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        GridBagConstraints c = new GridBagConstraints();

        JButton jb1 = new JButton("Button1");
        JButton jb2 = new JButton("Button2");
        JButton jb3 = new JButton("Button3");

        c.gridx = 0;
        c.gridy = 0;
        c.weightx = 0;
        c.weighty = 1;
        c.insets = new Insets(0, 20, 0, 20);
        c.fill = GridBagConstraints.HORIZONTAL;
        frm.add(jb1, c);

        c.gridx = 1;
        c.gridy = 0;
        c.weightx = 0;
        c.weighty = 1;
        c.fill = GridBagConstraints.VERTICAL;
        frm.add(jb2, c);

        // c.gridx = 10;
        // c.gridy = 0;
        // c.fill = GridBagConstraints.VERTICAL;
        // frm.add(jb3, c);

        frm.setVisible(true);
    }

    public static void main(String[] args) {
        run();
    }
}
