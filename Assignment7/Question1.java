import java.util.*;
import java.lang.*;
class Check
{
    int iSum=0;
    int CountEven(int iNo)
    {
        while (iNo>0) {
    
            int iDigit = iNo%10;
            if(iDigit%2==0)
            {
                iSum=iSum+iDigit;
            }
            iNo = iNo/10;
        }       
    return iSum;
    }

}

class Question1{
    public static void main(String args[]) {
    
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number:");
        int iValue = sobj.nextInt();
        Check cobj = new Check();
        int iRet = cobj.CountEven(iValue);
        System.out.printf("%d is addition of Even no\n",iRet);
    }
}