package contabanco;
public class Conta {
    //atributos
    public int NumConta;
    private String tipo;
    private String dono;
    private float saldo;
    private boolean status;
    
    //construtor
    public Conta()
            {
        saldo=0;
        status=false;
    }
    
    //Métodos específicos
    public String abrirConta(String t)
    {
        setTipo(t);
        setStatus(true);
        
        if(t=="cc")
            saldo=50;
        else if(t=="cp")
            saldo=150;
        else
            System.out.println("ERRO 1");
        return t;
    }
    
    public void fecharConta()
    {
        if(saldo>0)
            System.out.println("Saque o valor de R$" +saldo + " restante em sua conta.");
        else if(saldo<0)
            System.out.println("ATENÇÃO: Sua conta possui défict de R$"+saldo+".");
        else
        {
            setStatus(false);
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
        saldo-=sc;
        return saldo;
    }
    
    public float pagarMensal(float pgM)
    {
        saldo-=pgM;
        return saldo;
    }
    
    
    //----------------------------------------|
    
    //strs e gtrs (métodos especiais)
    public void setNumConta(int n)
    {
        NumConta=n;
    }
    public int getNumConta()
    {
        System.out.println("Número da Conta: " + NumConta);
        return NumConta;
    }
    public String setTipo(String t)
    {   
        tipo=t;
        return tipo;
    }
    public String getTipo()
    {
        System.out.println(tipo);
        return tipo;
    }       
    public void setDono(String d)
    {
        dono=d;
    }
    public void getDono()
    {
        System.out.println("Proprietário: "+dono);
    } 
    public void setSaldo(float s)
    {
        saldo+=s;
    }
    public void getSaldo()
    {
        System.out.println("Saldo: "+saldo);
    } 
    public void setStatus(boolean st)
    {
        status=st;
    }
    public void getStatus()
    {
        System.out.println(status);
    }
}
  
