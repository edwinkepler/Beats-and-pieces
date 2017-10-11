package reaktor;
import javax.swing.*;

public class App1 {

	public static void main(String[] args) {
		JFrame frm = new JFrame();
		JButton btn = new JButton("click me!");
		
		btn.setBounds(10, 10, 100, 50);
		
		frm.setSize(300, 300);
		frm.setLayout(null);
		frm.setVisible(true);
		frm.add(btn);

	}

}
