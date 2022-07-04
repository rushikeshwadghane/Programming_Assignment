//Q.5) Write java program to accept directory name from user display all name of files from that directory
	import java.lang.*;
	import java.util.*;
	import java.io.*;
	
	class Question5
	{
		public static void main(String arg[])throws IOException
		{
			boolean bRet = false;
			Scanner Sobj = new Scanner(System.in);
			
			System.out.println("Enter the Directory name");
			
			String path = Sobj.nextLine();
			
			File directorypath = new File(path);
			
			FileFilter textFilefilter = new FileFilter()
			{
				public boolean accept(File file)
				{
					boolean isFile = file.isFile();
					if(isFile)
					{
						return true;
					}
					else
					{
						return false;
					}
				}
				
			};
			
			File fileList[] = directorypath.listFiles(textFilefilter);
			
			System.out.println("List of the text file in the specifed director:");
			for(File file : fileList)
			{
				System.out.println("File name:"+file.getName());
				System.out.println("");
			}
			
		}
	}