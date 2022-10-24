/*
-----------------------------------------------------------| 
----------------------------------------------- Subprocesso

Quando um processo (processo pai) cria um outro processo, 
ele é conhecido como subprocesso ou processo filho. 
O subprocesso, por sua vez, pode criar outros 
subprocessos.

A utilização de subprocessos permite dividir uma aplicação 
em partes que podem trabalhar de forma concorrente. 

-----------------------------------------------------------|

Imagine, por exemplo:

Um servidor web que aceite requisições de clientes da 
internet e coloque as requisições em uma fila.

Uma forma simples de implementar este servidor seria 
criar um processo que pegue a primeira requisição da 
fila, processe a requisição e devolva o resultado do 
processamento ao cliente que a solicitou.

Após isso, ele pegaria a próxima requisição e faria 
o mesmo trabalho.

-----------------------------------------------------------|

O problema com essa solução é que ela não aproveita a 
capacidade de multiprocessamento dos sistemas atuais. 

Como existe apenas um processo em execução, somente um 
dos processadores do sistema é utilizado para atendimento 
das requisições.

Além disso, se houver várias requisições complexas e demoradas 
e uma requisição simples, como uma pequena página HTML, entrar 
no final da fila, esta requisição mais simples, que poderia ser 
respondida rapidamente, será atendida somente depois que todas 
as demais forem processadas.

-----------------------------------------------------------|

A utilização de subprocessos resolve bem estes problemas. 
Se o servidor, no lugar de responder sequencialmente a 
cada requisição, criar um subprocesso para cada uma delas, 
tirará proveito da capacidade de multiprocessamento do 
sistema. 

Como cada requisição será tratada por um processo 
diferente, as requisições serão espalhadas pelos 
processadores do sistema, aproveitando sua capacidade 
de multiprocessamento. 

Além disso, como as requisições serão tratadas por 
diferentes processos, elas serão executadas 
concorrentemente.

Dessa forma, uma requisição simples, como a 
solicitação de uma página HTML, poderá ser iniciada e 
respondida rapidamente, ainda que existam outras 
requisições complexas solicitadas anteriormente e que 
elas ainda estejam sendo processadas.
-----------------------------------------------------------|

O trecho de código abaixo em Linguagem C exemplifica a 
parte de um servidor web simples que cria subprocessos 
para atendimento das requisições:

*/

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

