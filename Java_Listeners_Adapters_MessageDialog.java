/*
-----------------------------------------------------------|
------------------------------------------- MessageDialog

Exibe uma mensagem e aguarda OK do usuário.

*/

package exemplo;
import java.awt.Component;
import javax.swing.*;

public class Janela  {

    private static Component janela;

    public static void main(String[] args){

            JOptionPane.showMessageDialog(janela, "Cuidado com as Provas!","Linguagem de Programação",JOptionPane.WARNING_MESSAGE);
    }
}
