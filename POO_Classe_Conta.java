package contabanco;
public class Conta {
    public int NumConta;
    private String tipo;
    private String dono;
    private float saldo;
    private boolean status;
    
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
        System.out.println(dono);
    } 
    public void setSaldo(float s)
    {
        saldo=s;
    }
    public void getSaldo()
    {
        System.out.println(saldo);
    } 
    public void setStatus(boolean st)
    {
        status=st;
    }
    public void getStatus()
    {
        System.out.println(status);
    } 
    
    
    
    public Conta()
            {
        saldo=0;
        status=false;
    }
    public void saldoConta()
    {
        System.out.println("Saldo atual: " + saldo);
    }
    public void abrirConta()
    {
        System.out.println("Abre conta");
    }
    public void fecharConta()
    {
        
    }
    public float depositar(float d)
    {
        saldo+=d;
        return saldo;
    }
    public float sacar(float s)
    {
        return saldo;
    }
    public float pagarMensal(float p)
    {
        return saldo;
    }
}