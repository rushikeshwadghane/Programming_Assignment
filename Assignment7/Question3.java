import java.util.*;
import java.lang.*;
class Check
{
    int CountOdd(int iNo)
    {
        int iCnt=0;
        while (iNo>0) {
    
            int iDigit = iNo%10;
            if((iDigit>=3) && (iDigit<=7))
            {
                iCnt++;
            }
            iNo = iNo/10;
        }       
    return iCnt;
    }

}

class Question3{
    public static void main(String args[]) {
    
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number:");
        int iValue = sobj.nextInt();
        Check cobj = new Check();
        int iRet = cobj.CountOdd(iValue);
        System.out.printf("%d Number between 3-7.\n",iRet);
    }
}