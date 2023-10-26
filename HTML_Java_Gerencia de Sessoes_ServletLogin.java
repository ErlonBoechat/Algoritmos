
import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;
import javax.servlet.RequestDispatcher;

@WebServlet(name="ServletLogin", urlPatterns = {"/ServletLogin"})
public class ServletLogin extends HttpServlet {

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        String acao = request.getParameter("acao");
        if(acao==null)
            throw new ServletException("Parametro requerido");
        HttpSession session = request.getSession();
        
        switch(acao){
            case"conectar":
                if(request.getParameter("login").equals("admin")&&request.getParameter("senha").equals("123")){
                    session.setAttribute("usuario","Administrador");
                    response.sendRedirect("Segura.jsp");
                }
                else {
                    request.setAttribute("erro", "Dados invalidos.");
                    RequestDispatcher rd = request.getRequestDispatcher("Login.jsp");
                    rd.forward(request, response);
                }
                break;
            
               
            default:
                throw new ServletException("Parametro incorreto");
        }
    }  
    
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        
        String acao = request.getParameter("acao");
        if(acao==null)
            throw new ServletException("Parametro requerido");
        
        HttpSession session = request.getSession();
        request.getParameter("desconectar");
        session.invalidate();
        response.sendRedirect("Login.jsp");   
    }  
}