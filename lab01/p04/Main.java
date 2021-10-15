import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        while (s.hasNextLine()) {
            String line = s.nextLine();

            StringBuilder buff = new StringBuilder();
            for (char c : line.toCharArray()) {
                if (Character.isLetter(c)) {
                    buff.append(Character.toLowerCase(c));
                }
            }

            StringBuilder temp = new StringBuilder(buff);
            // StringBuilder temp = buff;
            temp.reverse();

            System.out.println(buff.toString().equals(temp.toString()) ? "palindrome" : "not a palindrome");
        }
    }
}