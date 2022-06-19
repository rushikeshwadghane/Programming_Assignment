import java.util.Scanner;
class Check
{
    int bRet=0;
    int  CheckFour(int iNo)
    {
    
        while (iNo>0) {
            int iDigit = iNo%10;
            if(iDigit==4)
            {
                bRet++;
            }
            iNo=iNo/10;   
        }
        return bRet;
    }
}
public class Question4
{
     public static void main(String[] args) 
    {
        int  iCheck=0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter no:");
        int iValue = sobj.nextInt();

        Check cobj = new Check();

        iCheck = cobj.CheckFour(iValue);
        

        System.out.printf("%d It contain %d times two\n",iValue,iCheck);
               
    }
    
}



