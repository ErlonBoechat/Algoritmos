class Ex1 {
    public static void main(String[] args) {
        int x=11, y=5;
        int resto;
        
        resto = x%y;
        
        System.out.println(resto); 
        System.out.println("\n"); 
        
        if(resto>0)
           System.out.print("\nNao nulo ");
        
        else
           System.out.print("\nNulo ");
    }
}