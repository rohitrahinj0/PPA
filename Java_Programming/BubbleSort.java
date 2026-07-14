import java.util.*;

class Bubblesort
{
  public static void Bubble(int Arr[])
  {
    boolean issorted = false;
    for(int i =0; i<Arr.length-1; i++)
    {
      for(int j=0; j<Arr.length-1-i; j++)
      {
        if(Arr[j]>Arr[j+1])
        {
          int temp = Arr[j];
          Arr[j] = Arr[j+1];
          Arr[j+1] = temp; 
          issorted = true;
        }
      }
    }
    if(issorted==false)
    {
      return;
    }
    for (int i=0; i<Arr.length; i++)
    {
      System.out.print(Arr[i]+" ");
      
    }
    System.out.println();
  }

  public static void main(String A[])
  {
    int Arr[] = {2,5,1,4,7,9,6};

    Bubble(Arr);

  }
}