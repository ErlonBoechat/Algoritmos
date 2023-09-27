class ErroCalc extends Exception{

  public ErroCalc(int a, int b){

    super("\nErro com os numeros "+a+" e "+b);
  }
}

class Calculadora {

  public int somar(int a, int b){

    return a+b;
  }

  public int dividir(int a, int b) throws ErroCalc {

    if(b==0)

      throw new ErroCalc(a, b);

    return a/b;
  }
}


class TesteCalc {

  public static void main(String[] args) {

    Calculadora c1 = new Calculadora();

    try {

       System.out.println("\n"+c1.somar(2, 3));
       System.out.println("\n"+c1.dividir(6, 3));
       System.out.println("\n"+c1.dividir(6, 0));

    } catch (ErroCalc e){

       System.out.println(e.getMessage());

    }
  }
}