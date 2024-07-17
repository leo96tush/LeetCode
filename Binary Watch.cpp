class Solution {
public:
    string get_bitmap_string(int number) {

        string bitmap_output = "";

        if (number == 0) {
            return "0";
        }

        while (number > 0) {
            if (number % 2 == 0) {
                bitmap_output += "0";
            } else {
                bitmap_output += "1";
            }

            number = number / 2;
        }

        reverse(bitmap_output.begin(), bitmap_output.end());

        return bitmap_output;
    }

    int sum_of_bitmap_string(string bitmap_string) {

        int sum = 0;

        for (char s : bitmap_string) {
            sum += int(s) - int('0');
        }

        return sum;
    }

    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> output;

        unordered_map<int, unordered_set<int>> hours;
        unordered_map<int, unordered_set<int>> minutes;

        for (int i = 0; i <= 11; i++) {
            hours[sum_of_bitmap_string(get_bitmap_string(i))].insert(i);
        }

        for (int i = 0; i <= 59; i++) {
            minutes[sum_of_bitmap_string(get_bitmap_string(i))].insert(i);
        }

        for (int i = 0; i <= turnedOn; i++) {
            int j = turnedOn - i;

            unordered_set<int> hours_vals = hours[i];
            unordered_set<int> minutes_vals = minutes[j];

            for (auto hour_val : hours_vals) {
                for (auto minute_val : minutes_vals) {
                    string hour_val_str = to_string(hour_val);
                    string minute_val_str = "";
                    if (minute_val < 10) {
                        minute_val_str += "0" + to_string(minute_val);
                    } else {
                        minute_val_str = to_string(minute_val);
                    }
                    output.push_back(hour_val_str + ":" + minute_val_str);
                }
            }
        }

        return output;
    }
};
