//Q.3. Write java program to accept directory name from user and create that directory.


import java.lang.*;
import java.util.*;
import java.io.*;
import java.nio.file.*;

class Question3
{
	public static void main(String[] arg) throws IOException
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a file name to check the regular file.");
		
		String fname1 = sobj.nextLine();
		
		File file = new File(fname1);
		
		if(!file.exists())
		{
			file.mkdirs();
			System.out.println("Directory is created...");
		}
		else
		{
			System.out.println("already exist directry...");
		}
	}
}
