

                                                          // Find the Student that Will Replace the Chalk  //


class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        //sum of chalk
        long long sum=0;
        for(int i=0; i<chalk.size(); i++)
        sum+=chalk[i];

        k=k%sum;
        for(int i=0; i<chalk.size(); i++)
        {
            if(k-chalk[i]<0)
            return i;
            else
            k-=chalk[i];
        }
        return chalk.size()-1;
    }
};
