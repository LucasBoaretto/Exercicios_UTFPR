public class UsaComplexo {

    public static void main(String[] args) {

        Complexo a = new Complexo(1, 2);
        Complexo b = new Complexo(3, 4);

        a.imprimeNumero();
        b.imprimeNumero();

        Complexo c = a.soma(b);
        c.imprimeNumero();

        Complexo d = a.subtrai(b);
        d.imprimeNumero();

        Complexo e = a.multiplica(b);
        e.imprimeNumero();

        

    }
}