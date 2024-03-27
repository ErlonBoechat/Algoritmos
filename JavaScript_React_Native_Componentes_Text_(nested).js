/* 
                          Text

Componente utilizado para a apresentação de textos. Suporta aninhamento, 
estilização e manuseio de toque. 

O exemplo a seguir mostra a utilização aninhada de dois elementos Text. 
Neste exemplo, o componente também é estilizado com o uso do StyleSheet.
*/

import React, {useState} from "react";
import {Text, StyleSheet} from "react-native";

const TextoAninhado = () => {

   const [titulo,setTitulo] = useState("Texto do elemento filho"); 

   const modificaTexto = () => {
      setTitulo("Esse texto está sendo exibido pois o primeiro elemento de texto foi pressionado/tocado");
   };  

   return (
   
      <Text style={styles.baseText}>
         <Text style={styles.titulo} onPress={modificaTexto}> // reage ao evento 'pressionar/tocar' elemento
            {titulo}
            {"\n"}
            {"\n"}
         </Text>
      </Text>    
   );
};  

const styles = StyleSheet.create({

   baseText: {
      fontFamily: "Verdana",
      marginTop: 50,
      marginLeft: 10,
   },

   titulo: {
      marginTop:10,
      fontSize:18,
      fontWeight:"bold"
   }
});

export default TextoAninhado;
