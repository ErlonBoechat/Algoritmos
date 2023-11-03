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