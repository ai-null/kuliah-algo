#include <stdio.h>
#include <map>

// Dengan menggunakan program carilah:
// a. Siapa yang mendapatkan nilai tertinggi dari pelajaran matematika
// b. Siapa yang mendapatkan nilai Terendah dari pelajaran IPA
// c. Siapa yang mendapatkan nilai kedua nya sama antara matematika dan ipa

using namespace std;

enum Type
{
    LARGEST_MATH,
    LOWEST_SCIENCE,
    EQUAL,
};

// no, ID, nilai Mat, nilai IPA
int dataNilai[10][5] = {
    {1, 123, 20, 55},
    {2, 456, 95, 48},
    {3, 789, 45, 35},

    {4, 111, 88, 63},
    {5, 222, 74, 100},
    {6, 333, 80, 80},
    {7, 444, 30, 85},

    {8, 555, 100, 71},
    {9, 666, 86, 90},
    {10, 777, 65, 43},
};

const string ID = "id";
const string VALUE = "value";

map<string, int> setValues(int id, int value) {
    map<string, int> out;
    out[ID] = id;
    out[VALUE] = value;

    return out;
}

int findValues(Type type)
{
    map<string, int> largestMathHolder = { {ID, 0}, {VALUE, 0} };
    map<string, int> lowestScienceHolder = { {ID, 0}, {VALUE, 0} };
    map<string, int> equalResult = { {ID, 0}, {VALUE, 0} };

    string returnType = VALUE;

    for (int i = 0; i < 10; i++)
    {
        int id = dataNilai[i][1];
        int mathIndex = dataNilai[i][2];
        int scienceIndex = dataNilai[i][3];

        // get largest math result
        if (mathIndex > largestMathHolder[VALUE])
            largestMathHolder = setValues(id, mathIndex);

        // get lowest science result
        if (i == 0 || lowestScienceHolder[VALUE] > scienceIndex)
            lowestScienceHolder = setValues(id, scienceIndex);

        // get equal result for math and science
        if (mathIndex == scienceIndex)
            equalResult = setValues(id, scienceIndex);
    }

    switch (type)
    {
    case Type::LARGEST_MATH:
        return largestMathHolder[returnType];
    case Type::LOWEST_SCIENCE:
        return lowestScienceHolder[returnType];
    case Type::EQUAL:
        return equalResult[returnType];
    default :
        return 0;
    }
}

int main()
{
    printf("nilai tertinggi dari pelajaran matematika adalah = %d\n\n", findValues(LARGEST_MATH));
    printf("nilai terendah dari pelajaran IPA adalah = %d\n\n", findValues(LOWEST_SCIENCE));
    printf("nilai siswa yang mempunyai nilai sama antara matematika dan ipa adalah = %d\n\n", findValues(EQUAL));

    return 0;
}
