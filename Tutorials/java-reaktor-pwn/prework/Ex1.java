package reaktor;
import javax.swing.*;
import java.awt.event.*;

public class Ex1 {
	public static void main(String[] args) {
		JLabel lblName = new JLabel("Imi�");
		JLabel lblLastName = new JLabel("Nazwisko");
		JLabel lblPosition = new JLabel("Stanowisko");
		JLabel lblResult = new JLabel();
		
		JTextField txtName = new JTextField();
		JTextField txtLastName = new JTextField();
		JTextField txtPosition = new JTextField();
		
		JButton btnResult = new JButton("Wypisz");
		JButton btnQuit = new JButton("Wyj�cie");
		
		JFrame frmMain = new JFrame("Third app");
		
		frmMain.setSize(300, 600);
		frmMain.setVisible(true);
		frmMain.setLayout(null);
		
		lblName.setBounds(10, 20, 100, 20);
		txtName.setBounds(10, 50, 100, 20);
		
		lblLastName.setBounds(10, 80, 100, 20);
		txtLastName.setBounds(10, 110, 100, 20);
		
		lblPosition.setBounds(10, 130, 100, 20);
		txtPosition.setBounds(10, 150, 100, 20);
		
		lblResult.setBounds(10, 180, 250, 20);
		
		btnResult.setBounds(10, 210, 100, 20);
		btnQuit.setBounds(150, 210, 100, 20);
		
		frmMain.add(lblName);
		frmMain.add(txtName);
		frmMain.add(lblLastName);
		frmMain.add(txtLastName);
		frmMain.add(lblPosition);
		frmMain.add(txtPosition);
		frmMain.add(lblResult);
		frmMain.add(btnResult);
		frmMain.add(btnQuit);
		
		btnResult.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				String name = txtName.getText();
				String lastName = txtLastName.getText();
				String position = txtPosition.getText();
				lblResult.setText(name + " " + lastName + " (" + position + ")");
			}
		});
		
		btnQuit.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				frmMain.dispatchEvent(new WindowEvent(frmMain, WindowEvent.WINDOW_CLOSING));
			}
		});
	}
}
