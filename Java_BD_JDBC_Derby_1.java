/*
Podemos acompanhar nesse código os quatro passos citados para a conexão e utilização 
do banco de dados e, após a recepção dos dados da consulta no ResultSet, podemos nos 
movimentar pelos registros, acessando cada campo pelo nome, sempre lembrando de utilizar 
o método correto para o tipo.

Quatro passos:

1 - instanciar a classe do driver de conexão

2 - obter uma conexão (Connection) a partir da Connection String, usuário e senha

3 - instanciar um executor de SQL (Statement)

4 - executar os comandos DML 

*/

package javabancodedados;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

public class JavaBancoDeDados {
    
    public static void main(String[] args) throws Exception{
        
        Class.forName("org.apache.derby.jdbc.ClientDriver");
        
        //passo1
        Connection c1 = DriverManager.getConnection("jdbc:derby://localhost:1527/LojaEAD",
                "LojaEAD", "LojaEAD");
        
        //passo2
        Statement st = c1.createStatement();
        
        //passo3
        ResultSet r1 = st.executeQuery("SELECT * FROM PRODUTO");
        
        //passo4 e recepção no ResultSet
        while(r1.next())
            System.out.println("Produto "+r1.getInt("codigo")+": "+
                    r1.getString("nome")+" :: "+r1.getInt("quantidade"));
        
        r1.close();
        st.close();
        c1.close();
    }
}

/*
Output:

run:
Produto 1: banana :: 1000
Produto 2: morango :: 150
Produto 3: laranja :: 400
Produto 4: tomate :: 50
Produto 5: cebola :: 200
BUILD SUCCESSFUL (total time: 0 seconds)

*/
