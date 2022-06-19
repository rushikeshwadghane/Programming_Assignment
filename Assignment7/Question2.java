import java.util.*;
import java.lang.*;
class Check
{
    int CountOdd(int iNo)
    {
        int iSum=0;
        while (iNo>0) {
    
            int iDigit = iNo%10;
            if(iDigit%2!=0)
            {
                iSum=iSum+iDigit;
            }
            iNo = iNo/10;
        }       
    return iSum;
    }

}

class Question2{
    public static void main(String args[]) {
    
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number:");
        int iValue = sobj.nextInt();
        Check cobj = new Check();
        int iRet = cobj.CountOdd(iValue);
        System.out.printf("%d is addition of Odd no\n",iRet);
    }
}