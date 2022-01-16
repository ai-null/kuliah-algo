#include <stdio.h>

using namespace std;

// Dengan menggunakan program carilah:
// a. Siapa yang mendapatkan nilai tertinggi dari pelajaran matematika
// b. Siapa yang mendapatkan nilai Terendah dari pelajaran IPA
// c. Siapa yang mendapatkan nilai kedua nya sama antara matematika dan ipa

int main()
{
    // no, ID, nilai Mat, nilai IPA
    int dataNilai[10][5] = {
        {1,123,20,55},
        {2,456,95,48},
        {3,789,45,35},

        {4,111,88,63},
        {5,222,74,100},
        {6,333,80,80},
        {7,444,30,85},

        {8,555,100,71},
        {9,666,86,90},
        {10,777,65,43},
    };

    int largestMathHolder = 0;
    int lowestScienceHolder = 0;
    int equalResult;

    for (int i = 0; i < 10; i++)
    {
        int id = dataNilai[i][1];
        int mathIndex = dataNilai[i][2];
        int scienceIndex = dataNilai[i][3];

        // get largest math result
        if (mathIndex > largestMathHolder)
            largestMathHolder = mathIndex;

        // get lowest science result
        if (i == 0) {
            lowestScienceHolder = scienceIndex;
        } else {
            if (lowestScienceHolder > scienceIndex)
                lowestScienceHolder = scienceIndex;
        }

        // get equal result for math and science
        if (mathIndex == scienceIndex)
            equalResult = id;
    }
    
    printf("nilai tertinggi dari pelajaran matematika adalah = %d\n\n", largestMathHolder);
    printf("nilai terendah dari pelajaran IPA adalah = %d\n\n", lowestScienceHolder);
    printf("id siswa yang mempunyai nilai sama antara matematika dan ipa adalah = %d\n\n", equalResult);
    
    return 0;
}
