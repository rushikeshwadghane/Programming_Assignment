import java.util.*;
class Diff
{
    int DiffEvenOdd(int iNo)
    {
        int iEsum=0,iOsum=0,iDiff=0;
        while(iNo>0)
        {
            int iDigit = iNo%10;
            if(iDigit%2==0)
            {
                iEsum=iEsum+iDigit;
            }
            else
            {
                iOsum=iOsum+iDigit;
            }
            iNo=iNo/10;
        }
        iDiff=iEsum-iOsum;

        return iDiff;
    }
}
public class Question5 
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number.");
        int iValue = sobj.nextInt();
        Diff dobj = new Diff();
        int iRet = dobj.DiffEvenOdd(iValue);

        System.out.printf("%d is the Diffrence between Even and odd number. \n",iRet);
    }    
}
