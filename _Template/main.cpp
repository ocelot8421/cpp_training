#include <iostream>

using namespace std;   

// PascalCase
struct Movie {
    string title;
    int releaseYear;
    bool isPopular;
};

int main() {
    //C++: structured binding
    //JS: destructuring
    //Python: unpacking

    Movie movie {"Cloud Atlas", 2012, true};
    auto [title, releaseYear, isPopular]{movie};
    cout << "Title: " << title << endl
         << "Release Year: " << releaseYear << endl
         << "Popular: " << isPopular << endl;
    return 0;
}

