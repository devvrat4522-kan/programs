import javax.swing.*;
import java.awt.*;

class hold {
    public void help() {
        JFrame frame = new JFrame("First Frame");
        frame.setVisible(true); // default visibilty is false
        frame.setSize(600, 500);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLocation(500, 500);
        JLabel lb = new JLabel("Set Label");
        frame.add(lb); // add label to the frame (default location center)
    }
}

public class kismat23 {
    public static void main(String[] args) {
        hold sd = new hold();
        sd.help();
        // Container c = frame.getContentPane();
        // Containers are the interface between a component and the low-level,
        // platform-specific functionality that supports the component
        // getContentPane retreive the objects from the Content Pane layer
        // Content pane layer: where the text,buttons and all the elements are put.
        // c.setBackground(Color.RED);

    }
}
