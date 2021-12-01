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