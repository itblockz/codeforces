import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] row1 = sc.nextLine().split(" ");
        int n = Integer.parseInt(row1[0]);
        int k = Integer.parseInt(row1[1]);
        int[] score = new int[n];
        for (int i = 0; i < n; i++) {
            score[i] = sc.nextInt();
        }
        sc.close();
        System.out.println(advance(score, k));
    }

    static int advance(int[] score, int k) {
        int cnt = 0;
        for (int i = 0; i < score.length; i++) {
            if (score[i] >= score[k-1] && score[i] > 0) {
                cnt++;
            } else {
                break;
            }
        }
        return cnt;
    }
}