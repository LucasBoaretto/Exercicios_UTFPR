public class UsaIntegerSet {

    public static void main(String[] args) {
        IntegerSet set1 = new IntegerSet();
        IntegerSet set2 = new IntegerSet();

        set1.insertElement(10);
        set1.insertElement(20);

        set2.insertElement(10);
        set2.insertElement(20);

        IntegerSet uniao = IntegerSet.union(set1, set2);
        IntegerSet intersection = IntegerSet.intersection(set1, set2);

        System.out.println("Set1 = " + set1.toSetString());
        System.out.println("Set2 = " + set2.toSetString());
        System.out.println("Uniao = " + uniao.toSetString());
        System.out.println("Interseção = " + intersection.toSetString());
        System.out.println("Iguais = " + set1.isEqualTo(set2));

    }

}
