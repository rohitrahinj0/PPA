// User Defined Package Import
import PPA.Marvellous;
import PPA.Infosystems;
import PPA.LB.Pune;

class client
{
  public static void main(String A[])
  {
    Marvellous mobj = new Marvellous();
    Infosystems iobj = new Infosystems();
    Pune pobj = new Pune();

    System.out.println("Inside main of Client");


    mobj.fun();
    iobj.gun();
    pobj.sun();


  }
}
