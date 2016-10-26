#include <ifstream>
#include <ofstream>

class FileHandler{

    int[] openFile(String fileName){
        ifstream F;
        F.open(("C:\\\\MathArray\\"+fileName+".txt", ios:in);
        int count = 0;
        int[10000] fileContent;
        while(F.eoa){
            F>>fileContent[count];
            count++;
        }
        F.close();
    }

    void saveFile(String fileName, int[] fileContent){
        ofstream F;
        F.open("C:\\\\MathArray\\"+fileName+".txt", ios.out);
        for(int i = 0; i < MathSource::getCountElement(fileContent); i++){
            F<<fileContent[i];
        }
        F.close();
    } 


}