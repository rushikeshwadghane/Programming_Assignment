import java.util.*;
class Diffrenece
{
    int EvenOdd(int Brr[])
    {
        int iSumEven=0,iSumOdd=0,iDiff=0,iCnt=0;
        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            if(Brr[iCnt]%2==0)
            {
                iSumEven=iSumEven+Brr[iCnt];
            }
            else{
                iSumOdd=iSumOdd+Brr[iCnt];
            }
        }
        iDiff = iSumEven-iSumOdd;
        
        return iDiff;
    }
}
public class Question1
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
        
        int iRet = dobj.EvenOdd(Arr);

        System.out.println(iRet+" is Diffrence between Sum of Even ans odd");
    }
    
}
