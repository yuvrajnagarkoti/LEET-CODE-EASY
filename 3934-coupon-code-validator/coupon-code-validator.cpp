class Solution {
public:
    vector<string> validateCoupons(vector<string>& code,
                                   vector<string>& businessLine,
                                   vector<bool>& isActive) {
        vector<string> electronics, grocery, pharmacy, restaurant;

        int n = code.size();

        for (int i = 0; i < n; i++) {
            // Coupon must be active
            if (!isActive[i]) continue;

            // Code must be non-empty
            if (code[i].empty()) continue;

            // Validate code characters
            bool valid = true;
            for (char ch : code[i]) {
                if (!(isalnum(ch) || ch == '_')) {
                    valid = false;
                    break;
                }
            }

            if (!valid) continue;

            // Store according to business line
            if (businessLine[i] == "electronics")
                electronics.push_back(code[i]);
            else if (businessLine[i] == "grocery")
                grocery.push_back(code[i]);
            else if (businessLine[i] == "pharmacy")
                pharmacy.push_back(code[i]);
            else if (businessLine[i] == "restaurant")
                restaurant.push_back(code[i]);
        }

        // Sort within each category
        sort(electronics.begin(), electronics.end());
        sort(grocery.begin(), grocery.end());
        sort(pharmacy.begin(), pharmacy.end());
        sort(restaurant.begin(), restaurant.end());

        // Build answer in required order
        vector<string> ans;

        ans.insert(ans.end(), electronics.begin(), electronics.end());
        ans.insert(ans.end(), grocery.begin(), grocery.end());
        ans.insert(ans.end(), pharmacy.begin(), pharmacy.end());
        ans.insert(ans.end(), restaurant.begin(), restaurant.end());

        return ans;
    }
};