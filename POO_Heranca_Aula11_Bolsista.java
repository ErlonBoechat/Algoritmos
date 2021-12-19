package aula11;
public class Bolsista extends Aluno {
    private float bolsa;
    
    public void renovarBolsa()
    {
        System.out.println("Bolsa renovada de" +getNome());
    }
    
    @Override
    public void pagarMensalidade()
    {
        System.out.println(getNome() + " é bolsista");
    }

    public float getBolsa() {
        return bolsa;
    }

    public void setBolsa(float bolsa) {
        this.bolsa = bolsa;
    }
    
    
}
