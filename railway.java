class railway{
  private static int result = 0;
private static int n = 4;

public static void g(int right,int spur){
  if (right == n) // all trains are on the right track
    result++;
  else if (right + spur < n) // some trains are still on the left track
    g(right,spur + 1); // a train moved from the left track to the spur
  if (spur > 0) // at least one train is on the spur
    g(right + 1,spur - 1); // a train moved from the spur to the right track 
               // (also counts trains moving directly from the left to right track)
}

public static void main (String[] args){ 
  g(0,0);
  System.out.println(result); // 5
}
}