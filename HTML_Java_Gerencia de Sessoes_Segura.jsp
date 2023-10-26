<%-- 
    Document   : sessionLogin
    Created on : 24 de out. de 2023, 22:23:42
    Author     : Erlon
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>

<% 
   if(session.getAttribute("usuario")==null)
      response.sendRedirect("Login.jsp");
     
      else {
%>    

<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Protected Page</title>
    </head>
    <body>
        <h1>Esta é uma página protegida</h1>
        <p>O usuário <%=session.getAttribute("usuario")%> está logado. </p>
        <p>Para desconectar clique <a href="ServletLogin?acao=desconectar">aqui</a></p>
        
    </body>
</html>
<%}%>