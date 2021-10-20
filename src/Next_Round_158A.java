import java.util.Scanner;

public class Next_Round_158A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        sc.nextLine();
        int count = 0;
        int limit = 0;
        for(int i = 0; i<n; i++){
            int temp = sc.nextInt();
            if(temp<1){
                count = i;
                break;
            }
            if(i == k-1){
                limit  = temp;
            }
            if(temp >= limit){
                count++;
            }
            else {
                break;
            }
        }
        sc.close();
        System.out.println(count);
    }
}
