#include <iostream>
#include <cstring>
#include <sstream>


int main() {
    int matrix_1[3][3], matrix_2[3][3], res[3][3];
    bool failure;
    char ch;

    for (int i = 0; i < 3; i++) {
    for (std::string string; std::getline(std::cin, string); ) {
        std::istringstream stream(string);

            for (int j = 0; j < 3; j++) {
                if (!(stream >> matrix_1[i][j])) {
                    failure = true;
                    break;
                }
            }
        break;
        }
    }



    for (int i = 0; i < 3; i++) {
        for (std::string string; std::getline(std::cin, string); ) {
            std::istringstream stream(string);

            for (int j = 0; j < 3; j++) {
                if (!(stream >> matrix_2[i][j])) {
                    failure = true;
                    break;
                }
            }
            break;
        }
    }

    std::cin>>ch;

    /*if (failure) {
        std::cout << "An error has occured while reading numbers from line" << std::endl;
        return 0;
    }




   if((ch != '+') && (ch != '-') && (ch != '*')) {
       std::cout << "An error has occured while reading numbers from line" << std::endl;
       return 0;
    }


*/

    if (!failure) {
        switch (ch) {
            case '+': {
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        res[i][j] = matrix_1[i][j] + matrix_2[i][j];
                    }
                }
                break;
            }


            case '-': {
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        res[i][j] = matrix_1[i][j] - matrix_2[i][j];
                    }
                }
                break;
            }

            case '*':{
                int temp=0;
                for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            temp =temp + matrix_1[i][j]*matrix_2[j][i];
                        }

                }

                break;}
        }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << res[i][j] << ' ';
        }
        std::cout<<std::endl;
        }
    }
    else {
        std::cout << "An error has occured while reading numbers from line" << std::endl;
    }

      return 0;
}
