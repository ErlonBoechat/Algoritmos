/*
-----------------------------------------------------------|
------------------------------------------- ConfirmDialog

Exibe uma mensagem e obtém uma confirmação 
(YES/NO, OK/CANCEL)

Conjuntos de botões de opção (option type):

- JOptionPane.DEFAULT_OPTION
- JOptionPane.YES_NO_OPTION
- JOptionPane.YES_NO_CANCEL_OPTION
- JOptionPane.OK_CANCEL_OPTION

*/

package exemplo;
import java.awt.Component;
import javax.swing.*;

public class Janela2 {
    
     private static Component janela;

     public static void main(String[] args){

            int resp = JOptionPane.showConfirmDialog(janela,"Você já estudou para as provas?", "Escolha uma opção",JOptionPane.OK_CANCEL_OPTION);
    }
}
