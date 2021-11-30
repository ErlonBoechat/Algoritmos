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