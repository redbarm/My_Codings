#include <iostream>
#include <string>
#include <vector>

using namespace std;


std::vector<size_t> find_all_instances(const std::string& str, const std::string& sub) {
    std::vector<size_t> positions;
    size_t pos = str.find(sub, 0);
    while(pos != std::string::npos) {
        positions.push_back(pos);
        pos = str.find(sub, pos + 1);
    }
    return positions;
}

int main() {
    std::string text = "Nneigheigh";
    std::string target = "neigh";
    std::vector<size_t> occurrences = find_all_instances(text, target);

    if (occurrences.empty()) {
        std::cout << "Substring not found." << std::endl;
    } else {
        std::cout << "Substring found at positions: ";
        for (size_t pos : occurrences) {
            std::cout << pos << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}