package contabanco;
public class Conta {
    //atributos
    public int NumConta;
    protected String tipo;
    private String dono;
    private float saldo;
    private boolean status;
   
    //Métodos personalizados (específicos)
    
    public void estadoAtual()
    {
        System.out.println("--------------------------------");
        System.out.println("Conta: "+this.getNumConta());
        System.out.println("Tipo: "+this.getTipo());
        System.out.println("Proprietário: "+this.getDono());
        System.out.println("Saldo: "+this.getSaldo());
        System.out.println("Status: "+this.getStatus());    
    }
    
    public void abrirConta(String t)
    {
        this.setTipo(t);
        this.setStatus(true);
        
        if(t=="cc")
        {    this.setSaldo(50);
            System.out.println("Conta corrente aberta com sucesso.");
        }
        else if(t=="cp")
        {    
            this.setSaldo(150);
            System.out.println("Conta poupança aberta com sucesso.");
        }    
        else
            System.out.println("ERRO 1");
    }
    
    public void fecharConta()
    {
        if(this.getSaldo()>0)
            System.out.println("Saque o valor de R$" + this.saldo + " restante em sua conta.");
        else if(this.getSaldo()<0)
            System.out.println("ATENÇÃO: Sua conta possui défict de R$"+this.saldo+".");
        else
        {
            this.setStatus(false); 
            System.out.println("Conta fechada com sucesso.");
        }
    }
    
     public void depositar(float d)
    {
        if(this.getStatus())
        {    
             //this.saldo+=d;  
             this.setSaldo(this.getSaldo()+d);
             System.out.println("Depósito realizado com sucesso para: "+this.getDono()+".");
        }
        else
        {
            System.out.println("Operação Inválida. Conta inexistente");
        }

    }

     public void sacar(float sc)
    {
        if(this.getStatus())
            if(this.getSaldo()>=sc)
            {  this.setSaldo(this.getSaldo()-sc); 
                System.out.println("Sacado: R$"+sc+" | Saldo atual: R$"+this.getSaldo());  
            }
            else if(this.getSaldo()<sc)
                System.out.println("Saldo insuficiente");
        else
            System.out.println("Operação Inválida. Conta inexistente");
    }
    
    public void pagarMensal(float pgM)
    {
        int v=0;
        if(this.getTipo()=="cc")
            v=12;
        else if(this.getTipo()=="cp")
        {
            v=20;
        }
        if (this.getStatus())
        {
            this.setSaldo(this.getSaldo()-v);
            System.out.println("Mensalidade paga com sucesso por "+this.getDono());   
        }
        else 
            System.out.println("Impossível pagar. Conta fechada.");
    }

    //métodos especiais
    
    //construtor
    public Conta()
            {
        this.saldo=0;
        this.status=false;
    }
   
    //strs e gtrs

    public int getNumConta() {
        return NumConta;
    }

    public void setNumConta(int NumConta) {
        this.NumConta = NumConta;
    }

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public String getDono() {
        return dono;
    }

    public void setDono(String dono) {
        this.dono = dono;
    }

    public float getSaldo() {
        return saldo;
    }

    public void setSaldo(float saldo) {
        this.saldo = saldo;
    }

    public boolean getStatus() {
        return status;
    }

    public void setStatus(boolean status) {
        this.status = status;
    }
}
