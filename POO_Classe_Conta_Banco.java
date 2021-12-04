package contabanco;
public class ContaBanco {
    public static void main(String[] args) {
        
        Conta c1 = new Conta();
        c1.setNumConta(0001);
        c1.setDono("Erlon Boechat");
        c1.abrirConta("cc");
        
        Conta c2 = new Conta();
        c2.setNumConta(0002);
        c2.setDono("Creuza Mendes");
        c2.abrirConta("cp");       
       
        c1.depositar(100);
        c2.depositar(500);
        c2.sacar(100);
        
        c1.sacar(150);
        c1.fecharConta();
        
        c1.estadoAtual();
        c2.estadoAtual();
   
    } 
}
