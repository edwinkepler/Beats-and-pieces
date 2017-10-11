package reaktor;
import java.awt.event.*;
import javax.swing.*;

public class App2 {

	public static void main(String[] args) {
		JFrame frm = new JFrame("Test");
		JButton btn = new JButton("Click me!");
		JTextField txt = new JTextField();
		
		btn.setBounds(10, 50, 150, 50);
		txt.setBounds(10, 10, 250, 30);

		btn.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				String s = txt.getText();
				txt.setText("Witaj " + s + " w Reaktorze PWN!");
			}
		});
		
		frm.setSize(300, 300);
		frm.setVisible(true);
		frm.setLayout(null);
		frm.add(btn);
		frm.add(txt);

	}

}
