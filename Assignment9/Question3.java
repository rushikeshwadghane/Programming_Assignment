import java.util.Scanner;
class Check
{
    
    Boolean CheckNumber( int Array1[])
    {
        boolean bCheck=false;
        for(int i=0;i<Array1.length;i++)
        {
            if(Array1[i]==11)
            {
                bCheck= true;
                break;
            }
        }
        return bCheck;
    }
    
}

public class Question3 {
  public static void main(String[] args) {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter NUmber of element: ");
      int iSize =sobj.nextInt();

      int Array[] =  new int[iSize];
      System.out.println("Enter element of Array");

      for(int i=0;i<Array.length;i++)
      {
          Array[i]=sobj.nextInt();
      }

      Check cobj = new Check();

      boolean bRet= cobj.CheckNumber(Array);
      if(bRet==true)
      {
          System.out.println("It contain 11");
      }
      else{
          System.out.println("11 is not in Array ");
      }

  }  
}
