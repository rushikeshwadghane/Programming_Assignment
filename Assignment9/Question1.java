import java.util.*;
class Frequency
{
    int Even(int Array1[])
    {
        int iCount=0;
        for(int i=0;i<Array1.length;i++)
        {
            if(Array1[i]%2==0)
            {
                iCount++;
            }
        }
        return iCount;
    }
}
public class Question1
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number:");
        int iSize = sobj.nextInt();

        int Array[]= new int[iSize];
        System.out.println("Enter Element of Array:");

        for(int i=0;i<Array.length;i++)
        {
            Array[i]= sobj.nextInt(); 
        }
        Frequency fobj = new Frequency();

        int iRet = fobj.Even(Array);
        System.out.println(iRet+ "Even number in Array.");

    }
}