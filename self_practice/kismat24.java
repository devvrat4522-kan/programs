// Frame/Button

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import java.awt.event.*;
import java.awt.*;
import java.awt.event.ActionEvent;

class B_tton implements ActionListener {

    JLabel jlab;

    public void run() {
        JFrame frame = new JFrame("New Frame for Button ");
        frame.setLayout(new FlowLayout());
        frame.setSize(200, 200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        jlab = new JLabel("Press Button ");
        // frame.add(jlab);

        JButton bt1 = new JButton("UP");
        JButton bt2 = new JButton("DOWN");

        // parameter is object that is receiving event notification
        // the object is the instance of the ActionListner interface
        bt1.addActionListener(this);
        bt2.addActionListener(this);

        frame.add(bt1);
        frame.add(bt2);
        frame.add(jlab);
        frame.setVisible(true);

    }

    // ActionListner defines only actionPerformed
    public void actionPerformed(ActionEvent e) {
        if (e.getActionCommand().equals("UP"))
            jlab.setText("Pressed UP ");
        else
            jlab.setText("Pressed DOWN ");
    }
}

public class kismat24 {
    public static void main(String[] args) {
        B_tton b = new B_tton();
        b.run();
    }
}
