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
    
    //----------------------------------------|  
    
    //Métodos
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
        
    }
    
    public float depositar(float d)
    {
        saldo+=d;
        return d;
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
    
    //strs e gtrs
    public void setNumConta(int n)
    {
        NumConta=n;
    }
    public void getNumConta()
    {
        System.out.println("Número da Conta: " + NumConta);
    }
    public void setTipo(String t)
    {   
        tipo=t;
    }
    public void getTipo()
    {
        System.out.println(tipo);
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
  
