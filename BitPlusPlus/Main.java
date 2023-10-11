import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x = 0;
        for (int i = 0; i < n; i++) {
            String operation = sc.next();
            x += value(operation);
        }
        sc.close();
        System.out.println(x);
    }

    static int value(String operation) {
        if (operation.equals("X++") || operation.equals("++X")) {
            return 1;
        } else if (operation.equals("X--") || operation.equals("--X")) {
            return -1;
        }
        return 0;
    }
}