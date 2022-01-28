class Ex2 {
    public static void main(String[] args) {
        double x=75.9,y=73.32;

        System.out.println(x+y);
        System.out.println(x-y);
        System.out.println(x*y);
        System.out.println(x/y);
        
        System.out.println("\n");
        
        if(x+y>=y*2)
        System.out.print("\nSIM - A soma de " + x +" com "+y+" e maior ou igual a "+y*2);
        else
        System.out.print("\nNAO - A soma de " + x +" com "+y+" nao e maior ou igual a "+y*2);
    }
}