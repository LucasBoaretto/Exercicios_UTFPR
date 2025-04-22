public class Rational {

    private int numerator;
    private int denominator;

    public Rational(int n, int d) {
        numerator = n;
        denominator = d;
    }

    public Rational somar(Rational other) {
        int somaNum = (this.numerator * other.denominator) + (other.numerator * this.denominator);
        int somaDen = this.denominator * other.denominator;

        Rational result = new Rational(somaNum, somaDen);
        return result;
    }

    public Rational subtrair(Rational other) {
        int somaNum = (this.numerator * other.denominator) - (other.numerator * this.denominator);
        int somaDen = this.denominator * other.denominator;

        Rational result = new Rational(somaNum, somaDen);
        return result;
    }

    public Rational multiplicar(Rational other) {
        int multiNum = this.numerator * other.numerator;
        int multiDen = this.denominator * other.denominator;

        Rational result = new Rational(multiNum, multiDen);
        return result;
    }

    public Rational dividir(Rational other) {
        int divNum = this.numerator * other.denominator;
        int divDen = this.denominator * other.numerator;

        Rational result = new Rational(divNum, divDen);
        return result;
    }

}
