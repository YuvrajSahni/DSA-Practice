import java.util.Scanner; 
public class q1 { 
    public static void main(String[] args){ 
        Scanner sc=new Scanner(System.in); 
        System.out.println("Enter the Number : "); 
        int n; 
        n=sc.nextInt(); 
        System.out.println("Multiplication Table is : \n"); 
        for(int i=0;i<10;i++){ 
            System.out.println((n)+" x "+(i+1)+" = "+(n*(i+1))); 
        } 
    } 
}