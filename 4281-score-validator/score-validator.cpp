class Solution {
public:
    vector<int> scoreValidator(vector<string>& events)
    {
        int score = 0;
        int counter = 0;
        for(int i=0;i<events.size();i++)
        {
            if(counter == 10)
                break;
            if(events[i] == "W")
                counter++;
            else if(events[i] == "1" || events[i] == "WD" || events[i] == "NB")
                score++; 
            else if(events[i] == "2")
                score = score+2;
            else if(events[i] == "3")
                score = score+3;
            else if(events[i] == "4")
                score = score+4;
            else if(events[i] == "6")
                score = score+6;
        }
        return {score,counter};
    }
};