import java.util.Scanner;
class Check
{
    boolean bRet=false;
    boolean CheckZero(int iNo)
    {
    
        while (iNo>0) {
            int iDigit = iNo%10;
            if(iDigit==0)
            {
                bRet=true;
                break;
            }
            iNo=iNo/10;   
        }
        return bRet;
    }
}
public class Question2 
{
     public static void main(String[] args) 
    {
        boolean bCheck=false;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter no:");
        int iValue = sobj.nextInt();

        Check cobj = new Check();

        bCheck = cobj.CheckZero(iValue);
        
        if(bCheck==true)
        {
            System.out.println("It contain zero");
        }
        else{
            System.out.println("It not contain zero.");

        }
        
    }
    
}
