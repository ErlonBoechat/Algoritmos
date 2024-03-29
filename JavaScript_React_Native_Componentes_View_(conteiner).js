/* 
O fragmento de código a seguir demonstra a utilização de uma <View> 
como contêiner de outra <View> e de um elemento <Text>.
*/

import React from "react";
import {View, Text} from "react-native";

const ViewExemplo = () => {
   return (

      <View
         style={{
            flexDirection: "row",
            height: 100,
            padding: 20
         }}
      >
         <View style={{backgroundColor:"red", flex:0.5}} />             
         <Text>Hello World</Text>
      </View>   

   );
};

export default ViewExemplo;
