import java.util.Scanner;

public class Watermelon {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        if(n == 2){
            System.out.println("No");
        }
        else if(n%2 == 0){
            System.out.println("Yes");
        }
        else {
            System.out.println("No");
        }
    }
}
