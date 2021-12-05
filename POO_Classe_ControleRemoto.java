package aula06;
public class ControleRemoto implements Controlador {
//atributos
private int volume;
private boolean ligado;
private boolean tocando;
//métodos especiais
public ControleRemoto()
{
    volume=50;
    ligado=false;
    tocando=false;
}

    public int getVolume() {
        return volume;
    }

    public void setVolume(int volume) {
        this.volume = volume;
    }

    public boolean getLigado() {
        return ligado;
    }

    public void setLigado(boolean ligado) {
        this.ligado = ligado;
    }

    public boolean getTocando() {
        return tocando;
    }

    public void setTocando(boolean tocando) {
        this.tocando = tocando;
    }

//métodos abstratos

    @Override
    public void ligar() {
        this.setLigado(true);
    }

    @Override
    public void desligar() {
        this.setLigado(false);
    }

    @Override
    public void abrirMenu() {
        System.out.println("Está ligado? "+this.getLigado());
        System.out.println("EStá tocando? "+this.getTocando());
        System.out.print("Volume: "+this.getVolume());
        for(int i=0;i<=this.getVolume();i+=10)
        {
            System.out.print("|");
        }
    }

    @Override
    public void fecharMenu() {
        System.out.println("Fechando o menu...");
    }

    @Override
    public void maisVolume() {
        if(this.getLigado())
        {
            this.setVolume(this.getVolume()+5);
        }
    }

    @Override
    public void menosVolume() {
        if(this.getLigado())
        {
            this.setVolume(this.getVolume()-5);            
        }
    }

    @Override
    public void ligarMudo() {
        if(this.getLigado()&& this.getVolume()>0)
        {
            this.setVolume(0);
        }
    }

    @Override
    public void desligarMudo() {
        if(this.getLigado()&&getVolume()==0)
        {
            this.setVolume(50);
        }
    }

    @Override
    public void play() {
        if(this.getLigado()&&!(this.getTocando()))
        {
            this.setTocando(true);
        }
    }

    @Override
    public void pause() {
        if(this.getLigado()==true && this.getTocando())
        {
            this.setTocando(false);
        }
    }
}
