// Q.2) Write java program to accept file name from user open that file and display the content on screen
	import java.lang.*;
	import java.util.*;
	import java.io.*;
	
	class Question2
	{
		public static void main(String arg[])throws IOException
		{
			Scanner Sobj = new Scanner(System.in);
			
			System.out.println("Enter the file name and open file");
			
			String path = Sobj.nextLine();
			
			File file = new File(path);
			
			String str = "";
			 
			FileReader fobj = new FileReader(file);
			
			BufferedReader bobj = new BufferedReader(fobj);
			
			while((str = bobj.readLine()) != null)
			{
				System.out.println(str);
			}
			bobj.close();
		}
	}