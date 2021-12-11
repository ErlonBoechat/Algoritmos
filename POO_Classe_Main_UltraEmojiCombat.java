package ultraemojicombat;
public class UltraEmojiCombat {
    public static void main(String[] args) {
    
        Lutador l[] = new Lutador[6];
        
        l[0] = new Lutador("Erlon","Brasileiro",45,1.91f,91.8f,12,1,0);
        l[1] = new Lutador("Putscript","França",29,1.68f,57.8f,14,2,3);
        l[2] = new Lutador("Snapshadow","EUA",35,1.65f,80.9f,12,2,1);
        l[3] = new Lutador("Dead Code","Austrália",28,1.93f,81.6f,13,0,2);
        l[4] = new Lutador("UFOcobol","Brasil",37,1.70f,119.3f,5,4,3);
        l[5] = new Lutador("Nerdaart","EUA",30,1.81f,105.7f,12,2,4);
        
    Luta UFC01 = new Luta();   
    UFC01.marcarLuta(l[4], l[5]);
    UFC01.lutar();
    }
}
