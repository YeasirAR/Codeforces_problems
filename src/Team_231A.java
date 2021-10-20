import java.util.Scanner;

public class Team_231A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        int count = 0;
        for(int i = 0; i<n; i++){
            if((sc.nextInt()+ sc.nextInt()+ sc.nextInt()) >=2){
                count++;
            }
        }
        sc.close();
        System.out.println(count);
    }
}
