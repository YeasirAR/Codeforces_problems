import java.util.Scanner;

public class Way_Too_Long_Words {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        String[] arr  = new String[n];
        for(int i = 0; i<n; i++){
            arr[i] = sc.nextLine();
            int len = arr[i].length();
            if(arr[i].length()>10){
                arr[i] = ""+ arr[i].charAt(0)+(len-2)+arr[i].charAt(len-1);
            }
        }
        for (String s : arr){
            System.out.println(s);
        }
        sc.close();
    }
}
