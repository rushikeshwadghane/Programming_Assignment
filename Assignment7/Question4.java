import java.util.*; 
class Check
{
    int CountOdd(int iNo)
    {
        int iSum=1;
        while (iNo>0) {
            int iDigit = iNo%10;   
            {
                iSum=iSum*iDigit;
            }
            iNo = iNo/10;
        }       
    return iSum;
    }
}
class Question4{
    public static void main(String args[]) {
    
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number:");
        int iValue = sobj.nextInt();
        Check cobj = new Check();
        int iRet = cobj.CountOdd(iValue);
        System.out.printf("%d is Multiplication of Digit.\n",iRet);
    }
}