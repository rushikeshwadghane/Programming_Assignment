//Q.4) Write java program to accept file name from user open that file of that of that name if it is not eixsting
	import java.lang.*;
	import java.util.*;
	import java.io.*;
	
	class Question4
	{
		public static void main(String arg[])throws IOException
		{
			boolean bRet = false;
			Scanner Sobj = new Scanner(System.in);
			
			System.out.println("Enter the file name and open file");
			
			String path = Sobj.nextLine();
			
			File file = new File(path);
			
			bRet = file.createNewFile();
			
			if(bRet)
			{
				System.out.println("file create"+ file.getCanonicalPath());
			}
			else
			{
				System.out.println("file already"+ file.getCanonicalPath());
			}
		}
	}