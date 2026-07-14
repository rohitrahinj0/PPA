import java.util.*;
class LargestArr
{
    public int find(int Arr[])
    {
        int Large= Arr[0];
        for (int i=0; i < Arr.length; i++)
        {
            if(Arr[i] > Large)
            {
                Large = Arr[i];
            }
        }
        return Large;
    }


    public static void main(String A[])
    {
        int Arr[]= {4,5,2,8,6,9,3};
        LargestArr lobj = new LargestArr();
        System.out.println(lobj.find(Arr));

    }
}