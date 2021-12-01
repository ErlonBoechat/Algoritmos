 public float depositar(float d)
    {
        if(status==true)
        {    
             saldo+=d;  
             return saldo;
        }
        else
        {
            System.out.println("Operação Inválida. Conta inexistente");
            return saldo;
        }

    }
