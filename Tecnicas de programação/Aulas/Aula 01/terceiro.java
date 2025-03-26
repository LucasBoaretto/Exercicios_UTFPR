import javax.swing.JOptionPane;

public class terceiro {
    
    public static void main(String[] args){
        String texto = JOptionPane.showInputDialog("Entre com um número: ");
        int numero = Integer.parseInt(texto);
        JOptionPane.showMessageDialog(null, "O numero digitado foi: \n" + numero, "Este eh o titulo", 0);
    }
}
