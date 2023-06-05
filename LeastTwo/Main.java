import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        String[][] input = new String[n][3];
        for (int i = 0; i < n; i++) {
            input[i] = sc.nextLine().split(" ");
        }
        sc.close();
        System.out.println(least(input, 2));
    }

    static int least(String[][] input, int n) {
        int group = 0;
        for (int i = 0; i < input.length; i++) {
            int cnt = 0;
            for (int j = 0; j < input[0].length && cnt < n; j++) {
                if (input[i][j].equals("1")) {
                    cnt++;
                }
            }
            if (cnt == n) {
                group++;
            }
        }
        return group;
    }
}