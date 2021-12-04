package contabanco;
public class Conta {
    //atributos
    public int NumConta;
    protected String tipo;
    private String dono;
    private float saldo;
    private boolean status;
   
    //Métodos personalizados (específicos)
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
    
     public float depositar(float d)
    {
        if(status==true)
        {    
             saldo+=d;  
             return d;
        }
        else
        {
            System.out.println("Operação Inválida. Conta inexistente");
            return d;
        }

    }
    
     public float sacar(float sc)
    {
        if(status==true)
            if(saldo>=sc)
            {  saldo-=sc; 
                System.out.println("Sacado: R$"+sc+" | Saldo atual: R$"+saldo);  
            }
            else if(saldo<sc)
                System.out.println("Saldo insuficiente");
        else
            System.out.println("Operação Inválida. Conta inexistente");
        return saldo;
    }
    
    public float pagarMensal(float pgM)
    {
        if(status==true)
        {
        saldo-=pgM;
        }
        else
        {
            System.out.println("Operação Inválida. Conta inexistente");
        }
        return saldo;
    }

    //construtor
    public Conta()
            {
        this.saldo=0;
        this.status=false;
    }
   
    //strs e gtrs (métodos especiais)

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

    public boolean isStatus() {
        return status;
    }

    public void setStatus(boolean status) {
        this.status = status;
    }
   
    
}
  
