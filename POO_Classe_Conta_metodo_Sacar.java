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