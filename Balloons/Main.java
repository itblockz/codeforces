import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            String s = sc.next();
            LetterArray lArray = new LetterArray();
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (lArray.isEmpty(s.charAt(j))) {
                    cnt++;
                }
                lArray.add(s.charAt(j));
                cnt++;
            }
            System.out.println(cnt);
        }
        sc.close();
    }
}

class LetterArray {
    private int[] letters = new int[26];

    public void add(char c) {
        letters[c-'A']++;
    }

    public int count(char c) {
        return letters[c-'A'];
    }

    public boolean isEmpty(char c) {
        return letters[c-'A'] == 0;
    }

    @Override
    public String toString() {
        String s = "";
        for (int i = 0; i < 26; i++) {
            if (letters[i] > 0) {
                s += (char)('A'+i) + " : " + letters[i] + "\n";
            }
        }
        return s;
    }
}