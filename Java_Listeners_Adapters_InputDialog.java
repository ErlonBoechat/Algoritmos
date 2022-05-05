/*
-----------------------------------------------------------|
--------------------------------------------- InputDialog

Exibe uma mensagem e obtém um valor de entrada do usuário.

*/

package exemplo;
import java.awt.Component;
import javax.swing.*;

public class Janela3 {
   
   private static Component janela;
   
   public static void main (String[] args){
   
      String nome = JOptionPane.showInputDialog(janela, "Qual é o seu número de Matricula", "Linguagem de Programação", JOptionPane.QUESTION_MESSAGE);
   } 
}
