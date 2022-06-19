import java.util.*;
class Frequency
{
    int Even(int Array1[])
    {
        int iEven=0,iOdd=0,iDiff=0;
        for(int i=0;i<Array1.length;i++)
        {
            if(Array1[i]%2==0)
            {
                iEven++;
            }
            else{
                iOdd++;
            }
        }
        iDiff= iEven-iOdd;

        return iDiff;
    }
}
public class Question2
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
        System.out.println(iRet+" Diffrence between Even and Odd in Array .");

    }
}