import java.util.*;
class Digit
{
    void Display(int iNo)
    {
        int iDigit=0;
        while(iNo>0)
        {
           iDigit= iNo%10;
           System.out.println(+iDigit);
           iNo=iNo/10;
        }
    }
}

class Digit1
{
 public static void main(String args[])
   {
     Scanner sobj = new Scanner(System.in);

     System.out.println("Enter no:");

      int iValue = sobj.nextInt();
      Digit dobj = new Digit();
      dobj.Display(iValue);
  
}