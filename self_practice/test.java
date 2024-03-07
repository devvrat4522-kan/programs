
// import javax.swing.Icon;
// import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JToggleButton;
import javax.swing.SwingUtilities;
import javax.swing.event.DocumentEvent;
import javax.swing.event.DocumentListener;
// import javax.swing.text.Document;

import java.awt.*;
import java.awt.event.*;

public class test {
    JCheckBox[] boxes = new JCheckBox[3];

    test() {
        JFrame frame = new JFrame("Testing components");
        frame.setLayout(new FlowLayout());

        JLabel lbl = new JLabel("A label");
        frame.add(lbl);

        JTextField txt = new JTextField(40);
        txt.setText("Default textfield text");
        frame.add(txt);
        txt.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                lbl.setText("Enter pressed in textfield");
            }
        });

        // txt.getDocument().addDocumentListener(new DocumentListener() {
        // public void changedUpdate(DocumentEvent e) {
        // // Plain text components do not fire these events
        // // fired only from StyledDocument objects
        // }

        // public void insertUpdate(DocumentEvent e) {
        // lbl.setText("information inserted");
        // }

        // public void removeUpdate(DocumentEvent e) {
        // lbl.setText("information removed");
        // }
        // });

        // JButton btn = new JButton("Testing Button");
        // frame.add(btn);
        // btn.addActionListener(new ActionListener() {
        // public void actionPerformed(ActionEvent e) {
        // txt.setFont(new Font(Font.SERIF, Font.BOLD, 14));
        // // txt.getDocument().putProperty(Document.TitleProperty, "A new title");
        // }
        // });

        // JToggleButton tglBtn = new JToggleButton("TButton");
        // frame.add(tglBtn);
        // tglBtn.addItemListener(new ItemListener() {
        // public void itemStateChanged(ItemEvent e) {
        // if (tglBtn.isSelected())
        // lbl.setText("Toggle Button on");
        // else
        // lbl.setText("Toggle Button off");
        // }
        // });

        class CheckBoxItemListener implements ItemListener {
            public void itemStateChanged(ItemEvent e) {
                // JCheckBox source = (JCheckBox)e.getItem();
                // if(source.isSelected())
                // lbl.setText("You selected " + source.getText());
                // else
                // lbl.setText("You deselected " + source.getText());
                boolean isAllSelected = true;
                for (JCheckBox box : boxes) {
                    if (!box.isSelected())
                        isAllSelected = false;
                }

                if (isAllSelected)
                    lbl.setText("All boxes checked");
            }
        }

        // JCheckBox has JToggleButton as its immediate superclass
        /*
         * JCheckBox javaChk = new JCheckBox("Java");
         * frame.add(javaChk);
         * JCheckBox cChk = new JCheckBox("C");
         * frame.add(cChk);
         * JCheckBox cppChk = new JCheckBox("C++");
         * frame.add(cppChk);
         * ItemListener chkListener = new CheckBoxItemListener();
         * javaChk.addItemListener(chkListener);
         * cChk.addItemListener(chkListener);
         * cppChk.addItemListener(chkListener);
         */
        boxes[0] = new JCheckBox("Java");
        boxes[1] = new JCheckBox("C");
        boxes[2] = new JCheckBox("C++");

        ItemListener chkListener = new CheckBoxItemListener();
        for (JCheckBox box : boxes) {
            frame.add(box);
            box.addItemListener(chkListener);
        }
        frame.setSize(500, 500);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new test();
            }
        });
    }
}