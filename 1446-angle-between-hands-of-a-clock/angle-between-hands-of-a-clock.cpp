class Solution {
public:
    double angleClock(int hour, int minutes) {
        int mod=hour%12;
        double min=minutes*6, h=mod*30+(minutes*0.5);

        double res=abs(min-h);
        return res>180?360-res:res;
    }
};