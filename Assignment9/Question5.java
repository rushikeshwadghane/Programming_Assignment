import java.util.*;
class Frequency
{
    int Even(int Array1[],int iNo)
    {
        int iCount=0;
        for(int i=0;i<Array1.length;i++)
        {
            if(Array1[i]==iNo)
            {
                iCount++;
            }
        }
        return iCount;
    }
}
public class Question5
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number:");
        int iSize = sobj.nextInt();

        int Array[]= new int[iSize];
        System.out.println("Enter Element of Array:");

        for(int i=0;i<Array.length;i++)
        {
            Array[i]= sobj.nextInt(); 
        }

        System.out.println("Enter number for checking:");
        int iNum =sobj.nextInt();

        Frequency fobj = new Frequency();

        int iRet = fobj.Even(Array,iNum);
        System.out.println(iRet + "times  number in Array.");

    }
}