import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        System.out.println(roman(n));
    }

    static String roman(int n) {
        if (n > 3999) return null;
        String str = "";
        String[] labels = {"M", "D", "C", "L", "X", "V", "I"};
        int[] values = {1000, 500, 100, 50, 10, 5, 1};
        for (int i = 0; i < 7; i += 2) {
            int x = n / values[i];
            if (x == 4) {
                str += labels[i] + labels[i - 1]; // IV
            } else if (x == 9) {
                str += labels[i] + labels[i - 2]; // IX
            } else {
                if (x >= 5) {
                    str += labels[i - 1];
                    x -= 5;
                }
                str += labels[i].repeat(x);
            }
            n %= values[i];
            if (n == 0) break;
        }
        return str;
    }
}