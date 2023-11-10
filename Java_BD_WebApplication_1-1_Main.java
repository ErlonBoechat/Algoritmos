package javabancodedados;

public class JavaBancoDeDados {
    
    public static void main(String[] args) throws Exception{
        
        ProdutoDAO dao = new ProdutoDAO();
        
        dao.obterTodos().forEach((x) -> {    
            System.out.println("Produto: "+x.getCodigo()+
                ": "+x.getNome()+" :: "+x.getQuantidade());
        });
    }
}