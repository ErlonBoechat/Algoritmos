package javabancodedados;

import jakarta.enterprise.context.SessionScoped;
import jakarta.inject.Named;
import java.io.Serializable;
import java.util.List;
import java.util.ArrayList;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

@Named(value="produtoDAO")
@SessionScoped
public class ProdutoDAO implements Serializable {
    
    private Connection getConnection() throws Exception {
        Class.forName("org.apache.derby.jdbc.ClientDriver");
        
        return DriverManager.getConnection("jdbc:derby://localhost:1527/LojaEAD",
      "LojaEAD", "LojaEAD");
    }
    
    private Statement getStatement() throws Exception {       
        return getConnection().createStatement();       
    }
    
    private void  closeStatement(Statement st) throws Exception {
        st.getConnection().close();
    }
    
    public List<Produto> obterTodos(){
        
        ArrayList<Produto> lista = new ArrayList<>();
        try{
            ResultSet r1= getStatement().executeQuery("SELECT * FROM PRODUTO");
            while(r1.next())
                lista.add(new Produto(r1.getInt("codigo"),r1.getString("nome"),
                        r1.getInt("quantidade")));
            closeStatement(r1.getStatement());
        }catch(Exception e){}
        
        return lista;
    } 
    
    public void excluir(int codigo){

       try{
           
         Statement st = getStatement();
         st.executeUpdate("DELETE FROM PRODUTO WHERE CODIGO = "+codigo);
         closeStatement(st); 
         
        }catch(Exception e){}
    }
       
    public void incluir(Produto p){
        
       try{
           
           java.sql.PreparedStatement ps = getConnection().prepareStatement("INSERT INTO PRODUTO VALUES(?,?,?)");
           ps.setInt(1,p.getCodigo());
           ps.setString(2,p.getNome());
           ps.setInt(3,p.getQuantidade());
           
       }catch(Exception e){}
   }    
}
