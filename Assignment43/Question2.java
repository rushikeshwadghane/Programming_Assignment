//Q.2. Write java program to accept file name from user and check whether that file is regular file or not


import java.lang.*;
import java.util.*;
import java.io.*;
import java.nio.file.*;

class Question2
{
	public static void main(String[] arg) throws IOException
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a file name to check the regular file.");
		
		String fname1 = sobj.nextLine();
		
		Path Pfno = Paths.get(fname1);
		
		if(Files.isRegularFile(Pfno))
		{
			System.out.println(fname1 + " is regular file...");
		}
		else
		{
			System.out.println(fname1 + " is not regular file...");
		}
	}
}