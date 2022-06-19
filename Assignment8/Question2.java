
import java.util.*;

class Diffrenece
{
    void  Display(int Array[])
    {
        int iCnt=0;
        System.out.println("Number in Array is Divisible by 5:");
        for(iCnt=0;iCnt<Array.length;iCnt++)
        {
            if(Array[iCnt]%5==0)
            {
                System.out.println(+Array[iCnt]);
            }
        
        }
        
    }
}
public class Question2
 {
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of ELement:");
        int iSize = sobj.nextInt();
        
        int Arr[]=new int[iSize];

        System.out.println("Enter Element:");
        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            Arr[iCnt]= sobj.nextInt();  
        }
        Diffrenece dobj = new Diffrenece();
        
         dobj.Display(Arr);

    }
    
}
