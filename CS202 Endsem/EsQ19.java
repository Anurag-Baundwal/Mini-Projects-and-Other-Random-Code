public class EsQ19 {
    public static void main (String[] args) {
        try {
            int x=5;
            int y=x/0;
            f();
            System.out.println("A");
        }
        catch (RuntimeException ex){
            System.out.println("B");
        }
        catch (Exception ex1) {System.out.println("C");}
        finally {System.out.println("D"); System.out.println("E");}
    }
    public static void f() {
        int x=5;
        int y = x/0;
        System.out.println("0");
        throw new RuntimeException();
    }
}