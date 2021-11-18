import java.util.*;

public class Main {
    public static void main(String []args) {
        Scanner s = new Scanner(System.in);

        while (s.hasNextLine()) {
            String line = s.nextLine();

            StringBuilder builder = new StringBuilder();

            for (char c : line.toCharArray()) {
                if(Character.isLetter(c)) {
                    builder.append(Character.toLowerCase(c));
                }
            }

            StringBuilder temp = new StringBuilder(builder);
            temp.reverse();

            System.out.println(builder.toString().equals(temp.toString()) ? "palindrome" : "not a palindrome");
        }
    }
}