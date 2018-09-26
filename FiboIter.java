package fiboiter;

public class FiboIter {

    public static void fibonacciIterative(int n) {
        if (n <= 1) {
            System.out.println("Fibonacci number (byte): " + n);
            System.out.println("Fibonacci number (short): " + n);
            System.out.println("Fibonacci number (int): " + n);
            System.out.println("Fibonacci number (long): " + n);
        }
        byte fibB = 1;
        short fibS = 1;
        int fibI = 1;
        long fibL = 1;
        long prevFib = 0;

        for (int i = 1; i < n; i++) {
            long temp = fibL;
            fibB += prevFib;
            fibS += prevFib;
            fibI += prevFib;
            fibL += prevFib;
            prevFib = temp;
        }
        System.out.println("Fibonacci number (byte): " + fibB);
//        System.out.println("Overflow in n=12");
        System.out.println("Fibonacci number (short): " + fibS);
//        System.out.println("Overflow in n=24");
        System.out.println("Fibonacci number (int): " + fibI);
//        System.out.println("Overflow in n=47");
        System.out.println("Fibonacci number (long): " + fibL);
//        System.out.println("Overflow in n=93");
    }

    public static void main(String[] args) {

        int n = 93;

        fibonacciIterative(n);
    }

}
