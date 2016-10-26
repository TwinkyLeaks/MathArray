using namespace std;

class MathSource(){

    int[10000] xArray;
    int[10000] yArray;
    int size;
    bool initReady = false;

    void init(int[] firstArray, int[] secondArray, int sizeOfArray){
        for(int i = 0; i < sizeOfArray; i++){
            xArray[i] = firstArray[i];
            yArray[i] = secondArray[i];
        }
        size = sizeOfArray;
        initReady = true;
    }

    int[] getIntersection(){
        int[size] a;
        int count;
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                if(xArray[i] == yArray[j]){
                    a[count] = xArray[i];
                    ++count;
                    ++i;
                }
            }
        }
        return a;
    }

    int[] getIntersection(int[] firstArray, int[] secondArray, int sizeOfArray){
        int[sizeOfArray] a;
        int count;
        for(int i = 0; i < sizeOfArray; i++){
            for(int j = 0; j < sizeOfArray; j++){
                if(firstArray[i] == secondArray[j]){
                    a[count] = firstArray[i];
                    ++count;
                    ++i;
                }
            }
        }
        return a;
    }

    int[] getMerging(){
        int[size*2] a;
        int count = 0;
        for(int i = 0; i < size; i++){
            bool a = true;
            for(int j = 0; j < 0; j++){
                if(xArray[i]==yArray[j]){
                    a = true;
                }
            }
            if(a){
                a[count] = xArray[i];
                ++count;
            }
        }
        for(int i = 0; i < 0; i++){
            a[count+i] = yArray[i]
        }
    }
        return a;
    }

    int[] getMerging(int[] firstArray, int[] secondArray, int sizeOfArray){
        int[sizeOfArray*2] a;
        int count = 0;
        for(int i = 0; i < sizeOfArray; i++){
            bool a = true;
            for(int j = 0; j < sizeOfArray; j++){
                if(firstArray[i]==secondArray[j]){
                    a = true;
                }
            }
            if(a){
                a[count] = firstArray[i];
                ++count;
            }
        }
        for(int i = 0; i < sizeOfArray; i++){
            a[count+i] = secondArray[i]
        }
    }
        return a;
    }

    int[] getDifference(){
        int[size] a;
        int count = 0;
        for(int i = 0; i < size; i++){
            bool hasElement = true;
            for(int j = 0; j < size; j++){
                if(xArray[i] == yArray[j]){
                    hasElement = false;
                }
            }
            if(hasElement){
                a[count] = xArray[i];
                count++;
            }
        }
        return a;
        
    }

    int[] getDifference(int[] firstArray, int[] secondArray, int sizeOfArray){
        int[sizeOfArray] a;
        int count = 0;
        for(int i = 0; i < sizeOfArray; i++){
            bool hasElement = true;
            for(int j = 0; j < sizeOfArray; j++){
                if(firstArray[i] == secondArray[j]){
                    hasElement = false;
                }
            }
            if(hasElement){
                a[count] = firstArray[i];
                count++;
            }
        }
        return a;
        
    }

    int getCountElement(int[] Array, int sizeArray){
        int a;
        bool haveNullElement = false;
        for(int i = 0; i < sizeArray; i++){
            if(Array[i] == NULL){
                a = ++i;
                haveNullElement = true;
                break;
            }
        }
        if(haveNullElement){
            return a;
        }else{
            return size;
        }
    }



}