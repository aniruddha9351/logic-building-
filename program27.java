import java.util.Scanner;

class program27
{
    public static void main(String a[])
    {
        Scanner scanner  = null;
        String sName = null;
        int iAge = 0;
        float fMarks = 0.0; // error

        scanner  = new Scanner(System.in);  

        System.out.println("Enter your name");

        sName = scanner.next();

        System.out.println("Entet your age:");
        iAge = scanner.nextIn();

        System.out.println("Entet your marks:");
        FMarks = scanner.nextFloact;
        System.out.println("Welcome"+sName);
        System.out.println("Your age is:"+iAge);
        System.out.println("Your marks:"+fMarks);

    } 
}