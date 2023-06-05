import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        String[] ans = new String[n];
        for (int i = 0; i < n; i++) {
            String str = sc.nextLine();
            ans[i] = abbreviation(str);
        }
        for (int i = 0; i < n; i++) {
            System.out.println(ans[i]);
        }
    }

    static String abbreviation(String str) {
        String newStr = str;
        int n = str.length();
        if (n > 10) {
            newStr = "" + str.charAt(0) + (n-2) + str.charAt(n-1);
        }
        return newStr;
    }
}