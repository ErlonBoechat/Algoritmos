while (1) // Loop infinito
   {
      
      req = pega_proxima_requisicao();
      pid = fork();
      
      if (pid == 0) // Proceso filho
      { 
         processa_requisicao(req);
         exit(0);
      }
   }