//Q.1. Write java program to accept directory name from user and display all names of files from that directory which are regular file.


import java.lang.*;
import java.util.*;
import java.io.*;
import java.nio.file.*;

class Question1
{
	public static void main(String[] arg) throws IOException
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a path of the directory .");
		
		String fname1 = sobj.nextLine();
				
		File directoryPath = new File(fname1);
         FileFilter textFilefilter = new FileFilter(){
         public boolean accept(File file) {
            boolean isFile = file.isFile();
            if (isFile) {
               return true;
            } else {
               return false;
            }
         }
      };
      File filesList[] = directoryPath.listFiles(textFilefilter);
      System.out.println("List of the all regulatr files in Direcdtory :");
      for(File file : filesList) 
	  {		
			Path Pfno = Paths.get(file.getName());
			
		if(Files.isRegularFile(Pfno))
		{
			System.out.println("File name is : " + file.getName());
			
			System.out.println();
		}
      }
	}
}
