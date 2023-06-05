import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int w = sc.nextInt();
        sc.close();
        if (isEven(w) && w != 2) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }

    static boolean isEven(int n) {
        if (n % 2 == 0) {
            return true;
        }
        return false;
    }
}
