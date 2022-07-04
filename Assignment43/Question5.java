//Q.5. Write java program to accept directory name from user and display all names of files from that directory and size of each file on screen.


import java.lang.*;
import java.util.*;
import java.io.*;
import java.nio.file.*;

class Question5
{
	public static void main(String[] arg) throws IOException
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a file name to check the regular file.");
		
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
      System.out.println("List of the text files in the specified directory:");
      for(File file : filesList) 
	  {		 
		 System.out.println("File name is : " + file.getName());
		 
		 System.out.println("File size is : " + file.length());
		 
		 System.out.println();
      }
	}
}