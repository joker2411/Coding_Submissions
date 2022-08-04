class Solution {
public:
    int side = 1;
    
    int upMovement(int w,int p, int q){
        while(w>=q){
            if(w == q){
                return w-q;
            }
            w -= q;
            side = side^1;
        }
        return downMovement(w, p, q);
    }
    
    int downMovement(int w,int p, int q){
        w = q-w;
        side = side^1;
        while(w+q <= p){
            if(w+q == p){
                return w+q;
            }
            w += q;
            side = side^1;
        }
        side = side^1;
        return upMovement(2*p-w-q, p, q);
    }
    
    int mirrorReflection(int p, int q) {
        int w = p;
        w = upMovement(w, p, q);
        if(side == 0)
            return 2;
        else{
            if(w == 0)
                return 1;
            else 
                return 0;
        }
    }
};