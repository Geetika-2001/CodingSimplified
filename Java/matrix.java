import java.util.*;
    public class matrix
    {
        public static void main()
        {
            Scanner in=new Scanner(System.in);

            System.out.println("Enter number of rows");
            int r=in.nextInt();

            System.out.println("Enter number of columns");
            int c=in.nextInt();

            int a[][]=new int[r][c];
            int b[][]=new int[r][c];
            int c1[][]=new int[r][c];

            System.out.println("Enter elements of first matrix");
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    a[i][j]=in.nextInt();
                }
            }

            System.out.println("Enter elements of second matrix");
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    b[i][j]=in.nextInt();
                }
            }

            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    c1[i][j]=a[i][j]+b[i][j];
                }
            }


            System.out.println("First Matrix is");
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    System.out.print(a[i][j]+" ");}
                System.out.println();
            }
            System.out.println("Second Matrix is");
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    System.out.print(b[i][j]+" ");
                }
                System.out.println();
            }
            System.out.println("Final Added Matrix is");
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    System.out.print(c1[i][j]+" ");
                }
                System.out.println();}
        }
    }

