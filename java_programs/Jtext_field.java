import javax.swing.*;
import javax.swing.event.ListSelectionEvent;
import javax.swing.event.ListSelectionListener;

import java.awt.event.*;
import java.awt.*;

public class Jtext_field {
    public static void main(String[] args) {

        JFrame frm = new JFrame("frame");
        frm.setSize(200, 300);
        frm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frm.setLayout(new FlowLayout());

        JLabel jlb = new JLabel();
        JLabel lbl1 = new JLabel();

        JTextField jtf = new JTextField("text");
        jtf.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                jlb.setText(jtf.getText());
            }
        });

        JToggleButton jtb = new JToggleButton("ON/OFF");
        frm.add(jtb);

        jtb.addItemListener(new ItemListener() {
            public void itemStateChanged(ItemEvent e) {
                if (jtb.isSelected())
                    lbl1.setText("ONNNNNNNNN......");
                else
                    lbl1.setText("OFFFFFFFFFFF......");

            }
        });
        JLabel lbl2 = new JLabel("Select City : ");
        JList jl;
        JLabel lbl3 = new JLabel("");

        String Cities[] = { "New York", "Chicago", "Houston", "Denver", "Los Angeles", "Seattle", "London", "Paris",
                "New Delhi", "Hong Kong", "Tokyo", "Sydney" };

        jl = new JList(Cities);

        JScrollPane jlp = new JScrollPane(jl);

        jl.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
        jlp.setPreferredSize(new Dimension(120, 90));

        jl.addListSelectionListener(new ListSelectionListener() {
            public void valueChanged(ListSelectionEvent ae) {
                int ind = jl.getSelectedIndex();
                if (ind == -1)
                    lbl3.setText("select a city");
                else
                    lbl3.setText("select a city : " + Cities[ind]);
            }
        });

        String flags[] = { "France", "Germany", "Italy", "Japan" };
        JLabel lbl4 = new JLabel("FLag Selection ");
        JComboBox jmb = new JComboBox(flags);

        jmb.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String s = (String) jmb.getSelectedItem();
                lbl4.setText(s);
            }
        });

        frm.add(jtf);
        frm.add(jlb);
        frm.add(lbl1);

        frm.add(lbl2);
        frm.add(jlp);
        frm.add(lbl3);
        frm.add(jmb);
        frm.add(lbl4);
        frm.setVisible(true);

    }
}
