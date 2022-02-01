
//Qual o resultado das expressoes abaixo?

class ResultadoExpressoes {
    public static void main(String[] args) {
        double a,b,c,d,e,f,g,h;
        
        a = 5 * 4 / 6 + 7;
        b = 5 * 4 / (6 + 7);
        c = 5 * 4.0 / 6 + 7; 
        d = 5 * 4 % 6 + 7;
        e = 5 * 4 /(float) 6 + 7;
        f = (4 / 3) + (3.0 * 5);
        g = (4 / 3.0) + (3 * 5);
        h = (int)(4 / 3.0) + (3 *5); 
        
        System.out.print("Expressao a: "+a+"\n");
        System.out.print("Expressao b: "+b+"\n");
        System.out.print("Expressao c: "+c+"\n");
        System.out.print("Expressao d: "+d+"\n");
        System.out.print("Expressao e: "+e+"\n");
        System.out.print("Expressao f: "+f+"\n");
        System.out.print("Expressao g: "+g+"\n");
        System.out.print("Expressao h: "+h+"\n");
        
    }
}
