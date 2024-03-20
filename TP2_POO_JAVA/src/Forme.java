public class Forme {
    private int f0;
    private int f1;
    private int f2;

    public Forme(int f0, int f1, int f2) {
        this.f0 = f0;
        this.f1 = f1;
        this.f2 = f2;
    }

    public void compute() {
        double forme = 0.1 * (f0 + f1 + f2 - 200);
        if (forme <= 0) {
            System.out.println("Votre condition Physique est excellente.");
        } else if (forme > 0 && forme < 5) {
            System.out.println("Votre condition Physique est très bonne.");
        } else if (forme >= 5 && forme < 10) {
            System.out.println("Votre condition Physique est bonne.");
        } else if (forme >= 10 && forme < 15) {
            System.out.println("Votre condition Physique est moyenne.");
        } else {
            System.out.println("Votre condition Physique est faible.");
        }
    }


    public int getF0() { //déclaration des gets pour tout les prochains get
        return f0;
    }

    public void setF0(int f0) {  ////déclaration des sets pour tout les prochains get
        this.f0 = f0;
    }

    public int getF1() {
        return f1;
    }

    public void setF1(int f1) {
        this.f1 = f1;
    }

    public int getF2() {
        return f2;
    }

    public void setF2(int f2) {
        this.f2 = f2;
    }


    public static void main(String[] args) {
        Forme forme = new Forme(70, 80, 75);
        forme.compute();


    }
}
