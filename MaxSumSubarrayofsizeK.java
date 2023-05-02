import java.util.*;
class Solution{
    static long maximumSumSubarray(int K, ArrayList<Integer> Arr,int N){
        // code here
         long  s=0,ans=0;
        int ws=0,we=0;
        while(we<Arr.size()){
            s+=Arr.get(we);
            if (we-ws+1==K){
                if(ans<s)
               { 
                   ans=s;
                   
               }
                s-=Arr.get(ws);
                ws+=1;
                
            }
            we+=1;
            
        }
        return ans;
    }
}
