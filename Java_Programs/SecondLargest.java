public class SecondLargest {
    public static void main(String[] args) {
        int a = 5, b = 18, c = 10;

        if ((a > b && a < c) || (a > c && a < b))
            System.out.println("a is the second largest.");
        else if ((b > a && b < c) || (b > c && b < a))
            System.out.println("b is the second largest.");
        else
            System.out.println("c is the second largest.");
    }
}
