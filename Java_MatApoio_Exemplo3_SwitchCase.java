class SwitchCase {
    public static void main(String[] args) {
    
    char caracter='x';
    
       switch(caracter)
       {
          case 'a':
          case 'e':
          case 'i':
          case 'o':
          case 'u': System.out.println("E uma vogal");
             break;

          case 'x': System.out.println("Letra X"); 
             break;

          default: System.out.println("Letra invalida");
        }
   }
}