import java.util.ArrayList;

public class Exemplo021 {

	public static void main (String[] args) {

		ArrayList<String> lista = new ArrayList<>();
        
		lista.add("Primeiro");
		lista.add("Segundo");
		lista.add("Terceiro");

		System.out.println();

		for(String x: lista) {
			System.out.println(x+" colocado");
		}

		System.out.println();

		lista.forEach((x)->{System.out.println(x+" colocado");});

		System.out.println();
	}
}