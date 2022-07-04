//3) Write java program to accept file name from user open that file in write mode and write some data at end of file
	import java.lang.*;
	import java.util.*;
	import java.io.*;
	
	class Question3
	{
		public static void main(String arg[])throws IOException
		{
			Scanner Sobj = new Scanner(System.in);
			
			System.out.println("Enter the file name and open file");
			
			String path = Sobj.nextLine();
			
			File file = new File(path);
			
			String str = "";
			 
			FileWriter fobj = new FileWriter(file);
			
			System.out.println("Enter the data to write");
			
			str = Sobj.nextLine();
			
			fobj.write(str);
			
			fobj.close();
		}
	}