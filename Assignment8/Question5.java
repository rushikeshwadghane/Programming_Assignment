import java.util.Scanner;
class Multiple
{
    void Display(int Array1[])
    {
        System.out.println("Element in multiple of 11");
        for(int i=0;i<Array1.length;i++)
        {
            if(Array1[i]%11==0)
            {
                System.out.println(+Array1[i]);
            }
        }
    }
}

public class Question5
{
     public static void main(String args[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of element:");
        int iSize = sobj.nextInt();
        System.out.println("Enter element of Array");
        int Array[] = new int[iSize];
        for(int i=0;i<Array.length;i++)
        {
            Array[i]= sobj.nextInt();
        }

        Multiple mobj = new Multiple();

        mobj.Display(Array); 
    }
    
}
