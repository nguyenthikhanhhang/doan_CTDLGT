#include <string>
using namespace std;

class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.size();
        int i = 0;

        while (i < n) {
            int j = i;

            // tìm hết 1 từ
            while (j < n && title[j] != ' ') {
                j++;
            }

            int len = j - i;

            if (len <= 2) {
                // chuyển toàn bộ thành chữ thường
                for (int k = i; k < j; k++) {
                    title[k] = tolower(title[k]);
                }
            } else {
                // chữ đầu in hoa
                title[i] = toupper(title[i]);
                // còn lại viết thường
                for (int k = i + 1; k < j; k++) {
                    title[k] = tolower(title[k]);
                }
            }

            i = j + 1; // sang từ tiếp theo
        }

        return title;
    }
};