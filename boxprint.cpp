#include <iostream>

auto boxPrint(std::vector<std::string> vec, u_char sign = '*'){
    auto maxWordSize = 0;
    auto signForBorder = sign;
    for (int i = 0; i < vec.size(); i++) {
        if(vec[i].size() > maxWordSize){
            maxWordSize = vec[i].size();
        }
    }
    std::string printStartEnd = std::string(maxWordSize, signForBorder);
    std::cout << signForBorder << printStartEnd << signForBorder << "\n";
    for (int i = 0; i < vec.size(); i++) {
        int spaces = maxWordSize - vec[i].size();
        std::string printBody = std::string(spaces, ' ');
        std::cout << signForBorder << vec[i] << printBody << signForBorder << "\n";
    }
    std::cout << signForBorder << printStartEnd << signForBorder << "\n" << "\n";
}



auto main() -> int {
    boxPrint({"a", "quick", "brown", "fox"});
    boxPrint({"a", "quick", "brown", "fox"}, '*');
    boxPrint({"a", "quick", "brown", "fox"}, '#');
    boxPrint(std::vector<std::string>{"a", "quick", "brown", "fox"}, '#');
    boxPrint({""});
    boxPrint({});
    boxPrint({}, '#');
    boxPrint({"", "hmmmm", ""});
    boxPrint({"", "", ""});
}
