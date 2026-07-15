class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i =0;
        int j = people.size() -1;
        int boats = 0;
        sort(people.begin(), people.end());

        while(i <= j ){
            int weight = people[i] + people[j];

            if(weight <= limit){
                i++;
            }
            j--;
            boats++;
        }
        return boats;
    }
};
