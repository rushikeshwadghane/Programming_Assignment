import java.util.*;
class Check
{
    int CheckDigit(int iNo)
    {
        int iRet=0;
        while(iNo>0)
        {
            int iDigit = iNo%10;
            if(iDigit<6){
                iRet++;
            }
            iNo=iNo/10;
        }
        return iRet;
    }
}
public class Question5 {
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number: ");
        int iValue = sobj.nextInt();

        Check cobj = new Check();
        
        int iCheck = cobj.CheckDigit(iValue);

        System.out.printf("%d  contain %d number less than six",iValue,iCheck);

    }
    
}
