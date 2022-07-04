//Q.2. Write java program to accept directory name from user and write names of all files from that directory into one newly created file named as "Marvellous.txt".


import java.lang.*;
import java.util.*;
import java.io.*;

class Question2
{
	public static void main(String[] arg) throws IOException
	{
		File filess = new File("Marvellos.txt");
		
		boolean result;
		
		result = filess.createNewFile();
		
		if(result)
		{
			System.out.println("File Created"+filess.getCanonicalPath());
		}
		else
		{
			System.out.println("File already exist at lication :"+filess.getCanonicalPath());
			return;
		}
		
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
      System.out.println("Write a file name in directory..");
      for(File file : filesList) 
	  {		
		FileWriter fw = new FileWriter(filess,true);
		
		String str = "";
		
		str += file.getName() + "\t";
		
		str += "\n\n";
		fw.write(str);
		
		fw.close();
      }
	}
}