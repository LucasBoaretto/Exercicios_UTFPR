public class IntegerSet {
    private boolean[] a;

    public IntegerSet() {
        a = new boolean[101];
    }

    public void insertElement(int k) {
        if (k >= 0 && k <= 100) {
            a[k] = true;
        }
    }

    public void deleteElement(int m) {
        if (m >= 0 && m <= 100) {
            a[m] = false;
        }
    }

    public String toSetString() {
        String espaco = "";
        boolean vazio = true;

        for (int i = 0; i <= 100; i++) {
            if (a[i]) {
                espaco += i + " ";
                vazio = false;
            }
        }

        return vazio ? "--" : espaco.trim();
    }

    public static IntegerSet union(IntegerSet a, IntegerSet b) {
        IntegerSet result = new IntegerSet();
        for (int i = 0; i <= 100; i++) {
            result.a[i] = a.a[i] || b.a[i];
        }
        return result;
    }

    public static IntegerSet intersection(IntegerSet a, IntegerSet b) {
        IntegerSet result = new IntegerSet();
        for (int i = 0; i <= 100; i++) {
            result.a[i] = a.a[i] && b.a[i];
        }
        return result;
    }

    public boolean isEqualTo(IntegerSet other) {
        for (int i = 0; i <= 100; i++) {
            if (this.a[i] != other.a[i]) {
                return false;
            }
        }
        return true;
    }
}
