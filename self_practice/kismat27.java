import javax.swing.*;
import javax.swing.event.*;

import javafx.scene.control.ScrollPane;

import java.util.*;
import java.awt.*;
import java.awt.event.*;

class help implements ListSelectionListener {
    JList<String> jlist;
    JLabel jlabel;
    JFrame frm;
    JScrollPane src;
    String[] names = { "Sherry", "Jon", "Rachel", "Sasha", "Josselyn", "Randy",
            "Tom", "Mary", "Ken", "Andrew", "Matt", "Todd" };

    void run() {
        JFrame frm = new JFrame("Scroll Bar");
        frm.setLayout(new FlowLayout());
        frm.setSize(250, 250);
        frm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        // list declaration
        jlist = new JList<String>(names);
        // selection mode
        jlist.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);

        // scroll panel in which jlist is passed
        src = new JScrollPane(jlist);
        src.setPreferredSize(new Dimension(120, 90));
        jlabel = new JLabel("Please chose one among the Given ");
        // Add list selection handler
        jlist.addListSelectionListener(this);
        frm.add(src);
        frm.add(jlabel);
        frm.setVisible(true);
    }

    // whenever an item is selected from the list , JList generates an action
    // actionlistnerevent that changes tha selection by method valueChanged(current
    // object)
    // selection mode can be multiple
    public void valueChanged(ListSelectionEvent le) {
        int ind = jlist.getSelectedIndex();
        if (ind != -1)
            jlabel.setText("Current selection " + names[ind]);
        else
            jlabel.setText("please choose a name ");
    }
}

public class kismat27 {
    public static void main(String[] args) {
        help hp = new help();
        hp.run();
    }
}