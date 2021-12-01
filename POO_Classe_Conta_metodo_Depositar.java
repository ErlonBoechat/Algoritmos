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