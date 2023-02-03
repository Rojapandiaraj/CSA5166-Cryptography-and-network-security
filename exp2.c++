class GFG{

static int XorAscii(String str, int len)
{
  
    int ans = (str.charAt(0));
  
    for (int i = 1; i < len; i++) {
 
        ans = (ans ^ ((str.charAt(i))));
    }

    return ans;
}
public static void main(String[] args)
{
  
    String str = "geeksforgeeks";
    int len = str.length();
    System.out.print(XorAscii(str, len) +"\n");
  
    str = "GfG";
    len = str.length();
    System.out.print(XorAscii(str, len));
}
}
