//Q.1. Write java program to accept two file names from user and open first file and create new file (Second name) and copy the data from first file into newly created file.



import java.lang.*;
import java.util.*;
import java.io.*;

class Question1
{
	public static void main(String[] arg) throws IOException
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a file name to open the file.");
		
		String fname1 = sobj.nextLine();
		
		File file =new File(fname1);
		
		int i = 0;
		if(file.exists() == false)
		{
			System.out.println("File is not exists!");
			return ;
		}
		
		System.out.println("Enter the file name to creatr...");
		
		String fname2 = sobj.nextLine();
		
		File file2 = new File(fname2);
		
		boolean bRet = 	file2.createNewFile();
		
		if(bRet)
		{
			System.out.println("File Creatrd "+file.getCanonicalPath());
		}
		else
		{
			System.out.println("File already exist at location : " + file.getCanonicalPath());
		}
		
		String str = "";
		
		FileReader fread = new FileReader(file);
		
		BufferedReader bread = new BufferedReader(fread);
		
		str = bread.readLine();
		
		FileWriter fwrite = new FileWriter(file2);
		
		fwrite.write(str);
		
		fwrite.close();
		fread.close();
	}
}