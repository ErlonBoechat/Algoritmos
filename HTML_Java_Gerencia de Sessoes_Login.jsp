<%-- 
    Document   : Login
    Created on : 24 de out. de 2023, 23:07:05
    Author     : Erlon
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Acesso ao sistema</title>
    </head>
    <body>
        <h1>Acesso ao sistema</h1>
            <form action="ServletLogin" method="post">
            
            <input type="hidden" name="acao" value="conectar"/>
            Login: <input type="text" name="login"/>
            Senha: <input type="password" name="senha"/>
            || <input type="submit" value="login">  
            </form>
        <%
          if(request.getAttribute("erro")!=null){       
        %>
          <hr>Ocorreu um erro: <%=request.getAttribute("erro")%>  
        <%
         }  
        %> 
    </body>
</html>