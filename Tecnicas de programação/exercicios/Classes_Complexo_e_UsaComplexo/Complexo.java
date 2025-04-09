public class Complexo {

    private float real;
    private float imaginario;

    public Complexo(float r, float i) {
        real = r;
        imaginario = i;
    }

    public void imprimeNumero() {
        System.out.println(real + " + " + imaginario + "i");
    }

    public boolean equal(Complexo outro) {
        if (this.real == outro.real && this.imaginario == outro.imaginario) {
            return true;
        } else {
            return false;
        }
    }

    public Complexo soma(Complexo outro) {
        float r = this.real + outro.real;
        float i = this.imaginario + outro.imaginario;
        Complexo c = new Complexo(r, i);
        return c;
    }

    public Complexo subtrai(Complexo outro) {
        float r = this.real - outro.real;
        float i = this.imaginario - outro.imaginario;
        Complexo c = new Complexo(r, i);
        return c;
    }

    public Complexo multiplica(Complexo outro) {
        float r = this.real * outro.real - this.imaginario * outro.imaginario;
        float i = this.real * outro.imaginario + this.imaginario * outro.real;
        Complexo c = new Complexo(r, i);
        return c;
    }

    public Complexo divide(Complexo outro) {
        float r = (this.real * outro.real + this.imaginario * outro.imaginario)
                / (outro.real * outro.real + outro.imaginario * outro.imaginario);
        float i = (this.imaginario * outro.real - this.real * outro.imaginario)
                / (outro.real * outro.real + outro.imaginario * outro.imaginario);
        Complexo c = new Complexo(r, i);
        return c;
    }
}
