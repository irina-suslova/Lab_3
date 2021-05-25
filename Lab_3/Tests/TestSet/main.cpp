#include <iostream>
#include <gtest/gtest.h>
#include <string>
#include "set.h"
#include "set.cpp"
#include "complex.h"
#include "extrafunctions.h"

TEST( TestTimeOfIntSetCheckEquelSet, test0) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(100, randomInt);
    Set<int> *s2 = new Set<int>;
    s2->Generate(100, randomInt);
    int res = *s1 == *s2;
    ASSERT_TRUE(res == 0);
}

TEST( TestTimeOfIntSetCheckEquelSet, test1) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(1000, randomInt);
    Set<int> *s2 = new Set<int>;
    s2->Generate(1000, randomInt);
    int res = *s1 == *s2;
    ASSERT_TRUE(res == 0);
}

TEST( TestTimeOfIntSetCheckEquelSet, test2) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(10000, randomInt);
    Set<int> *s2 = new Set<int>;
    s2->Generate(10000, randomInt);
    int res = *s1 == *s2;
    ASSERT_TRUE(res == 0);
}

TEST( TestTimeOfIntSetCheckEquelSet, test3) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(50000, randomInt);
    Set<int> *s2 = new Set<int>;
    s2->Generate(50000, randomInt);
    int res = *s1 == *s2;
    ASSERT_TRUE(res == 0);
}

TEST( TestTimeOfIntSetCheckEquelSet, test4) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(100000, randomInt);
    Set<int> *s2 = new Set<int>;
    s2->Generate(100000, randomInt);
    int res = *s1 == *s2;
    ASSERT_TRUE(res == 0);
}

TEST( TestTimeOfFloatSetCheckEquelSet, test0) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(100, randomFloat);
    Set<float> *s2 = new Set<float>;
    s2->Generate(100, randomFloat);
    int res = *s1 == *s2;
    ASSERT_TRUE(res == 0);
}

TEST( TestTimeOfFloatSetCheckEquelSet, test1) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(1000, randomFloat);
    Set<float> *s2 = new Set<float>;
    s2->Generate(1000, randomFloat);
    int res = *s1 == *s2;
    ASSERT_TRUE(res == 0);
}

TEST( TestTimeOfFloatSetCheckEquelSet, test2) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(10000, randomFloat);
    Set<float> *s2 = new Set<float>;
    s2->Generate(10000, randomFloat);
    int res = *s1 == *s2;
    ASSERT_TRUE(res == 0);
}

TEST( TestTimeOfFloatSetCheckEquelSet, test3) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(50000, randomFloat);
    Set<float> *s2 = new Set<float>;
    s2->Generate(50000, randomFloat);
    int res = *s1 == *s2;
    ASSERT_TRUE(res == 0);
}

TEST( TestTimeOfFloatSetCheckEquelSet, test4) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(100000, randomFloat);
    Set<float> *s2 = new Set<float>;
    s2->Generate(100000, randomFloat);
    int res = *s1 == *s2;
    ASSERT_TRUE(res == 0);
}

TEST( TestTimeOfComplexSetCheckEquelSet, test0) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(100, randomComplex);
    Set<Complex> *s2 = new Set<Complex>;
    s2->Generate(100, randomComplex);
    int res = *s1 == *s2;
    ASSERT_TRUE(res == 0);
}

TEST( TestTimeOfComplexSetCheckEquelSet, test1) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(1000, randomComplex);
    Set<Complex> *s2 = new Set<Complex>;
    s2->Generate(1000, randomComplex);
    int res = *s1 == *s2;
    ASSERT_TRUE(res == 0);
}

TEST( TestTimeOfComplexSetCheckEquelSet, test2) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(10000, randomComplex);
    Set<Complex> *s2 = new Set<Complex>;
    s2->Generate(10000, randomComplex);
    int res = *s1 == *s2;
    ASSERT_TRUE(res == 0);
}

TEST( TestTimeOfComplexSetCheckEquelSet, test3) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(50000, randomComplex);
    Set<Complex> *s2 = new Set<Complex>;
    s2->Generate(50000, randomComplex);
    int res = *s1 == *s2;
    ASSERT_TRUE(res == 0);
}

TEST( TestTimeOfComplexSetCheckEquelSet, test4) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(100000, randomComplex);
    Set<Complex> *s2 = new Set<Complex>;
    s2->Generate(100000, randomComplex);
    int res = *s1 == *s2;
    ASSERT_TRUE(res == 0);
}

TEST( TestTimeOfStringSetCheckEquelSet, test0) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(100, randomString);
    Set<string> *s2 = new Set<string>;
    s2->Generate(100, randomString);
    int res = *s1 == *s2;
    ASSERT_TRUE(res == 0);
}

TEST( TestTimeOfStringSetCheckEquelSet, test1) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(1000, randomString);
    Set<string> *s2 = new Set<string>;
    s2->Generate(1000, randomString);
    int res = *s1 == *s2;
    ASSERT_TRUE(res == 0);
}

TEST( TestTimeOfStringSetCheckEquelSet, test2) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(10000, randomString);
    Set<string> *s2 = new Set<string>;
    s2->Generate(10000, randomString);
    int res = *s1 == *s2;
    ASSERT_TRUE(res == 0);
}

TEST( TestTimeOfStringSetCheckEquelSet, test3) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(50000, randomString);
    Set<string> *s2 = new Set<string>;
    s2->Generate(50000, randomString);
    int res = *s1 == *s2;
    ASSERT_TRUE(res == 0);
}

TEST( TestTimeOfStringSetCheckEquelSet, test4) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(100000, randomString);
    Set<string> *s2 = new Set<string>;
    s2->Generate(100000, randomString);
    int res = *s1 == *s2;
    ASSERT_TRUE(res == 0);
}




TEST( TestTimeOfIntSetUnion, test0) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(100, randomInt);
    Set<int> *s2 = new Set<int>;
    s2->Generate(100, randomInt);
    ASSERT_NO_FATAL_FAILURE(*s1 + *s2);
}

TEST( TestTimeOfIntSetUnion, test1) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(1000, randomInt);
    Set<int> *s2 = new Set<int>;
    s2->Generate(1000, randomInt);
    ASSERT_NO_FATAL_FAILURE(*s1 + *s2);
}

TEST( TestTimeOfIntSetUnion, test2) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(10000, randomInt);
    Set<int> *s2 = new Set<int>;
    s2->Generate(10000, randomInt);
    ASSERT_NO_FATAL_FAILURE(*s1 + *s2);
}

TEST( TestTimeOfIntSetUnion, test3) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(50000, randomInt);
    Set<int> *s2 = new Set<int>;
    s2->Generate(50000, randomInt);
    ASSERT_NO_FATAL_FAILURE(*s1 + *s2);
}

TEST( TestTimeOfIntSetUnion, test4) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(100000, randomInt);
    Set<int> *s2 = new Set<int>;
    s2->Generate(100000, randomInt);
    ASSERT_NO_FATAL_FAILURE(*s1 + *s2);
}

TEST( TestTimeOfFloatSetUnion, test0) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(100, randomFloat);
    Set<float> *s2 = new Set<float>;
    s2->Generate(100, randomFloat);
    ASSERT_NO_FATAL_FAILURE(*s1 + *s2);
}

TEST( TestTimeOfFloatSetUnion, test1) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(1000, randomFloat);
    Set<float> *s2 = new Set<float>;
    s2->Generate(1000, randomFloat);
    ASSERT_NO_FATAL_FAILURE(*s1 + *s2);
}

TEST( TestTimeOfFloatSetUnion, test2) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(10000, randomFloat);
    Set<float> *s2 = new Set<float>;
    s2->Generate(10000, randomFloat);
    ASSERT_NO_FATAL_FAILURE(*s1 + *s2);
}

TEST( TestTimeOfFloatSetUnion, test3) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(50000, randomFloat);
    Set<float> *s2 = new Set<float>;
    s2->Generate(50000, randomFloat);
    ASSERT_NO_FATAL_FAILURE(*s1 + *s2);
}

TEST( TestTimeOfFloatSetUnion, test4) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(100000, randomFloat);
    Set<float> *s2 = new Set<float>;
    s2->Generate(100000, randomFloat);
    ASSERT_NO_FATAL_FAILURE(*s1 + *s2);
}

TEST( TestTimeOfComplexSetUnion, test0) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(100, randomInt);
    Set<int> *s2 = new Set<int>;
    s2->Generate(100, randomInt);
    ASSERT_NO_FATAL_FAILURE(*s1 + *s2);
}

TEST( TestTimeOfComplexSetUnion, test1) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(1000, randomComplex);
    Set<Complex> *s2 = new Set<Complex>;
    s2->Generate(1000, randomComplex);
    ASSERT_NO_FATAL_FAILURE(*s1 + *s2);
}

TEST( TestTimeOfComplexSetUnion, test2) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(10000, randomComplex);
    Set<Complex> *s2 = new Set<Complex>;
    s2->Generate(10000, randomComplex);
    ASSERT_NO_FATAL_FAILURE(*s1 + *s2);
}

TEST( TestTimeOfComplexSetUnion, test3) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(50000, randomComplex);
    Set<Complex> *s2 = new Set<Complex>;
    s2->Generate(50000, randomComplex);
    ASSERT_NO_FATAL_FAILURE(*s1 + *s2);
}

TEST( TestTimeOfComplexSetUnion, test4) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(100000, randomComplex);
    Set<Complex> *s2 = new Set<Complex>;
    s2->Generate(100000, randomComplex);
    ASSERT_NO_FATAL_FAILURE(*s1 + *s2);
}

TEST( TestTimeOfStringSetUnion, test0) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(100, randomString);
    Set<string> *s2 = new Set<string>;
    s2->Generate(100, randomString);
    ASSERT_NO_FATAL_FAILURE(*s1 + *s2);
}

TEST( TestTimeOfStringSetUnion, test1) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(1000, randomString);
    Set<string> *s2 = new Set<string>;
    s2->Generate(1000, randomString);
    ASSERT_NO_FATAL_FAILURE(*s1 + *s2);
}

TEST( TestTimeOfStringSetUnion, test2) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(10000, randomString);
    Set<string> *s2 = new Set<string>;
    s2->Generate(10000, randomString);
    ASSERT_NO_FATAL_FAILURE(*s1 + *s2);
}

TEST( TestTimeOfStringSetUnion, test3) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(50000, randomString);
    Set<string> *s2 = new Set<string>;
    s2->Generate(50000, randomString);
    ASSERT_NO_FATAL_FAILURE(*s1 + *s2);
}

TEST( TestTimeOfStringSetUnion, test4) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(100000, randomString);
    Set<string> *s2 = new Set<string>;
    s2->Generate(100000, randomString);
    ASSERT_NO_FATAL_FAILURE(*s1 + *s2);
}




TEST( TestTimeOfIntSetCheckSubset, test0) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(100, randomInt);
    Set<int> *s2 = new Set<int>;
    s2->Generate(100, randomInt);
    ASSERT_NO_FATAL_FAILURE(s1->CheckSubset(s2));
}

TEST( TestTimeOfIntSetCheckSubset, test1) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(1000, randomInt);
    Set<int> *s2 = new Set<int>;
    s2->Generate(1000, randomInt);
    ASSERT_NO_FATAL_FAILURE(s1->CheckSubset(s2));
}

TEST( TestTimeOfIntSetCheckSubset, test2) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(10000, randomInt);
    Set<int> *s2 = new Set<int>;
    s2->Generate(10000, randomInt);
    ASSERT_NO_FATAL_FAILURE(s1->CheckSubset(s2));
}

TEST( TestTimeOfIntSetCheckSubset, test3) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(50000, randomInt);
    Set<int> *s2 = new Set<int>;
    s2->Generate(50000, randomInt);
    ASSERT_NO_FATAL_FAILURE(s1->CheckSubset(s2));
}

TEST( TestTimeOfIntSetCheckSubset, test4) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(100000, randomInt);
    Set<int> *s2 = new Set<int>;
    s2->Generate(100000, randomInt);
    ASSERT_NO_FATAL_FAILURE(s1->CheckSubset(s2));
}

TEST( TestTimeOfFloatSetCheckSubset, test0) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(100, randomFloat);
    Set<float> *s2 = new Set<float>;
    s2->Generate(100, randomFloat);
    ASSERT_NO_FATAL_FAILURE(s1->CheckSubset(s2));
}

TEST( TestTimeOfFloatSetCheckSubset, test1) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(1000, randomFloat);
    Set<float> *s2 = new Set<float>;
    s2->Generate(1000, randomFloat);
    ASSERT_NO_FATAL_FAILURE(s1->CheckSubset(s2));
}

TEST( TestTimeOfFloatSetCheckSubset, test2) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(10000, randomFloat);
    Set<float> *s2 = new Set<float>;
    s2->Generate(10000, randomFloat);
    ASSERT_NO_FATAL_FAILURE(s1->CheckSubset(s2));
}

TEST( TestTimeOfFloatSetCheckSubset, test3) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(50000, randomFloat);
    Set<float> *s2 = new Set<float>;
    s2->Generate(50000, randomFloat);
    ASSERT_NO_FATAL_FAILURE(s1->CheckSubset(s2));
}

TEST( TestTimeOfFloatSetCheckSubset, test4) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(100000, randomFloat);
    Set<float> *s2 = new Set<float>;
    s2->Generate(100000, randomFloat);
    ASSERT_NO_FATAL_FAILURE(s1->CheckSubset(s2));
}

TEST( TestTimeOfComplexSetCheckSubset, test0) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(100, randomComplex);
    Set<Complex> *s2 = new Set<Complex>;
    s2->Generate(100, randomComplex);
    ASSERT_NO_FATAL_FAILURE(s1->CheckSubset(s2));
}

TEST( TestTimeOfComplexSetCheckSubset, test1) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(1000, randomComplex);
    Set<Complex> *s2 = new Set<Complex>;
    s2->Generate(1000, randomComplex);
    ASSERT_NO_FATAL_FAILURE(s1->CheckSubset(s2));
}

TEST( TestTimeOfComplexSetCheckSubset, test2) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(10000, randomComplex);
    Set<Complex> *s2 = new Set<Complex>;
    s2->Generate(10000, randomComplex);
    ASSERT_NO_FATAL_FAILURE(s1->CheckSubset(s2));
}

TEST( TestTimeOfComplexSetCheckSubset, test3) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(50000, randomComplex);
    Set<Complex> *s2 = new Set<Complex>;
    s2->Generate(50000, randomComplex);
    ASSERT_NO_FATAL_FAILURE(s1->CheckSubset(s2));
}

TEST( TestTimeOfComplexSetCheckSubset, test4) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(100000, randomComplex);
    Set<Complex> *s2 = new Set<Complex>;
    s2->Generate(100000, randomComplex);
    ASSERT_NO_FATAL_FAILURE(s1->CheckSubset(s2));
}

TEST( TestTimeOfStringSetCheckSubset, test0) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(100, randomString);
    Set<string> *s2 = new Set<string>;
    s2->Generate(100, randomString);
    ASSERT_NO_FATAL_FAILURE(s1->CheckSubset(s2));
}

TEST( TestTimeOfStringSetCheckSubset, test1) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(1000, randomString);
    Set<string> *s2 = new Set<string>;
    s2->Generate(1000, randomString);
    ASSERT_NO_FATAL_FAILURE(s1->CheckSubset(s2));
}

TEST( TestTimeOfStringSetCheckSubset, test2) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(10000, randomString);
    Set<string> *s2 = new Set<string>;
    s2->Generate(10000, randomString);
    ASSERT_NO_FATAL_FAILURE(s1->CheckSubset(s2));
}

TEST( TestTimeOfStringSetCheckSubset, test3) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(50000, randomString);
    Set<string> *s2 = new Set<string>;
    s2->Generate(50000, randomString);
    ASSERT_NO_FATAL_FAILURE(s1->CheckSubset(s2));
}

TEST( TestTimeOfStringSetCheckSubset, test4) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(100000, randomString);
    Set<string> *s2 = new Set<string>;
    s2->Generate(100000, randomString);
    ASSERT_NO_FATAL_FAILURE(s1->CheckSubset(s2));
}




TEST( TestTimeOfIntSetCrossing, test0) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(100, randomInt);
    Set<int> *s2 = new Set<int>;
    s2->Generate(100, randomInt);
    ASSERT_NO_FATAL_FAILURE(*s1 * *s2);
}

TEST( TestTimeOfIntSetCrossing, test1) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(1000, randomInt);
    Set<int> *s2 = new Set<int>;
    s2->Generate(1000, randomInt);
    ASSERT_NO_FATAL_FAILURE(*s1 * *s2);
}

TEST( TestTimeOfIntSetCrossing, test2) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(10000, randomInt);
    Set<int> *s2 = new Set<int>;
    s2->Generate(10000, randomInt);
    ASSERT_NO_FATAL_FAILURE(*s1 * *s2);
}

TEST( TestTimeOfIntSetCrossing, test3) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(50000, randomInt);
    Set<int> *s2 = new Set<int>;
    s2->Generate(50000, randomInt);
    ASSERT_NO_FATAL_FAILURE(*s1 * *s2);
}

TEST( TestTimeOfIntSetCrossing, test4) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(100000, randomInt);
    Set<int> *s2 = new Set<int>;
    s2->Generate(100000, randomInt);
    ASSERT_NO_FATAL_FAILURE(*s1 * *s2);
}

TEST( TestTimeOfFloatSetCrossing, test0) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(100, randomFloat);
    Set<float> *s2 = new Set<float>;
    s2->Generate(100, randomFloat);
    ASSERT_NO_FATAL_FAILURE(*s1 * *s2);
}

TEST( TestTimeOfFloatSetCrossing, test1) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(1000, randomFloat);
    Set<float> *s2 = new Set<float>;
    s2->Generate(1000, randomFloat);
    ASSERT_NO_FATAL_FAILURE(*s1 * *s2);
}

TEST( TestTimeOfFloatSetCrossing, test2) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(10000, randomFloat);
    Set<float> *s2 = new Set<float>;
    s2->Generate(10000, randomFloat);
    ASSERT_NO_FATAL_FAILURE(*s1 * *s2);
}

TEST( TestTimeOfFloatSetCrossing, test3) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(50000, randomFloat);
    Set<float> *s2 = new Set<float>;
    s2->Generate(50000, randomFloat);
    ASSERT_NO_FATAL_FAILURE(*s1 * *s2);
}

TEST( TestTimeOfFloatSetCrossing, test4) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(100000, randomFloat);
    Set<float> *s2 = new Set<float>;
    s2->Generate(100000, randomFloat);
    ASSERT_NO_FATAL_FAILURE(*s1 * *s2);
}

TEST( TestTimeOfComplexSetCrossing, test0) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(100, randomComplex);
    Set<Complex> *s2 = new Set<Complex>;
    s2->Generate(100, randomComplex);
    ASSERT_NO_FATAL_FAILURE(*s1 + *s2);
}

TEST( TestTimeOfComplexSetCrossing, test1) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(1000, randomComplex);
    Set<Complex> *s2 = new Set<Complex>;
    s2->Generate(1000, randomComplex);
    ASSERT_NO_FATAL_FAILURE(*s1 * *s2);
}

TEST( TestTimeOfComplexSetCrossing, test2) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(10000, randomComplex);
    Set<Complex> *s2 = new Set<Complex>;
    s2->Generate(10000, randomComplex);
    ASSERT_NO_FATAL_FAILURE(*s1 * *s2);
}

TEST( TestTimeOfComplexSetCrossing, test3) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(50000, randomComplex);
    Set<Complex> *s2 = new Set<Complex>;
    s2->Generate(50000, randomComplex);
    ASSERT_NO_FATAL_FAILURE(*s1 * *s2);
}

TEST( TestTimeOfComplexSetCrossing, test4) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(100000, randomComplex);
    Set<Complex> *s2 = new Set<Complex>;
    s2->Generate(100000, randomComplex);
    ASSERT_NO_FATAL_FAILURE(*s1 * *s2);
}

TEST( TestTimeOfStringSetCrossing, test0) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(100, randomString);
    Set<string> *s2 = new Set<string>;
    s2->Generate(100, randomString);
    ASSERT_NO_FATAL_FAILURE(*s1 * *s2);
}

TEST( TestTimeOfStringSetCrossing, test1) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(1000, randomString);
    Set<string> *s2 = new Set<string>;
    s2->Generate(1000, randomString);
    ASSERT_NO_FATAL_FAILURE(*s1 * *s2);
}

TEST( TestTimeOfStringSetCrossing, test2) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(10000, randomString);
    Set<string> *s2 = new Set<string>;
    s2->Generate(10000, randomString);
    ASSERT_NO_FATAL_FAILURE(*s1 * *s2);
}

TEST( TestTimeOfStringSetCrossing, test3) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(50000, randomString);
    Set<string> *s2 = new Set<string>;
    s2->Generate(50000, randomString);
    ASSERT_NO_FATAL_FAILURE(*s1 * *s2);
}

TEST( TestTimeOfStringSetCrossing, test4) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(100000, randomString);
    Set<string> *s2 = new Set<string>;
    s2->Generate(100000, randomString);
    ASSERT_NO_FATAL_FAILURE(*s1 * *s2);
}




TEST( TestTimeOfIntSetCheckEntry, test0) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(100, randomInt);
    int a = randomInt();
    ASSERT_NO_FATAL_FAILURE(s1->CheckEntry(a));
}

TEST( TestTimeOfIntSetCheckEntry, test1) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(1000, randomInt);
    int a = randomInt();
    ASSERT_NO_FATAL_FAILURE(s1->CheckEntry(a));
}

TEST( TestTimeOfIntSetCheckEntry, test2) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(10000, randomInt);
    int a = randomInt();
    ASSERT_NO_FATAL_FAILURE(s1->CheckEntry(a));
}

TEST( TestTimeOfIntSetCheckEntry, test3) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(50000, randomInt);
    int a = randomInt();
    ASSERT_NO_FATAL_FAILURE(s1->CheckEntry(a));
}

TEST( TestTimeOfIntSetCheckEntry, test4) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(100000, randomInt);
    int a = randomInt();
    ASSERT_NO_FATAL_FAILURE(s1->CheckEntry(a));
}

TEST( TestTimeOfFloatSetCheckEntry, test0) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(100, randomFloat);
    float a = randomFloat();
    ASSERT_NO_FATAL_FAILURE(s1->CheckEntry(a));
}

TEST( TestTimeOfFloatSetCheckEntry, test1) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(1000, randomFloat);
    float a = randomFloat();
    ASSERT_NO_FATAL_FAILURE(s1->CheckEntry(a));
}

TEST( TestTimeOfFloatSetCheckEntry, test2) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(10000, randomFloat);
    float a = randomFloat();
    ASSERT_NO_FATAL_FAILURE(s1->CheckEntry(a));
}

TEST( TestTimeOfFloatSetCheckEntry, test3) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(50000, randomFloat);
    float a = randomFloat();
    ASSERT_NO_FATAL_FAILURE(s1->CheckEntry(a));
}

TEST( TestTimeOfFloatSetCheckEntry, test4) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(100000, randomFloat);
    float a = randomFloat();
    ASSERT_NO_FATAL_FAILURE(s1->CheckEntry(a));
}

TEST( TestTimeOfComplexSetCheckEntry, test0) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(100, randomComplex);
    Complex a = randomComplex();
    ASSERT_NO_FATAL_FAILURE(s1->CheckEntry(a));
}

TEST( TestTimeOfComplexSetCheckEntry, test1) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(1000, randomComplex);
    Complex a = randomComplex();
    ASSERT_NO_FATAL_FAILURE(s1->CheckEntry(a));
}

TEST( TestTimeOfComplexSetCheckEntry, test2) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(10000, randomComplex);
    Complex a = randomComplex();
    ASSERT_NO_FATAL_FAILURE(s1->CheckEntry(a));
}

TEST( TestTimeOfComplexSetCheckEntry, test3) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(50000, randomComplex);
    Complex a = randomComplex();
    ASSERT_NO_FATAL_FAILURE(s1->CheckEntry(a));
}

TEST( TestTimeOfComplexSetCheckEntry, test4) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(100000, randomComplex);
    Complex a = randomComplex();
    ASSERT_NO_FATAL_FAILURE(s1->CheckEntry(a));
}

TEST( TestTimeOfStringSetCheckEntry, test0) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(100, randomString);
    string a = randomString();
    ASSERT_NO_FATAL_FAILURE(s1->CheckEntry(a));
}

TEST( TestTimeOfStringSetCheckEntry, test1) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(1000, randomString);
    string a = randomString();
    ASSERT_NO_FATAL_FAILURE(s1->CheckEntry(a));
}

TEST( TestTimeOfStringSetCheckEntry, test2) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(10000, randomString);
    string a = randomString();
    ASSERT_NO_FATAL_FAILURE(s1->CheckEntry(a));
}

TEST( TestTimeOfStringSetCheckEntry, test3) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(50000, randomString);
    string a = randomString();
    ASSERT_NO_FATAL_FAILURE(s1->CheckEntry(a));
}

TEST( TestTimeOfStringSetCheckEntry, test4) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(100000, randomString);
    string a = randomString();
    ASSERT_NO_FATAL_FAILURE(s1->CheckEntry(a));
}




TEST( TestTimeOfIntSetGetMax, test0) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(100, randomInt);
    ASSERT_NO_FATAL_FAILURE(s1->GetMax());
}

TEST( TestTimeOfIntSetGetMax, test1) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(1000, randomInt);
    ASSERT_NO_FATAL_FAILURE(s1->GetMax());
}

TEST( TestTimeOfIntSetGetMax, test2) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(10000, randomInt);
    ASSERT_NO_FATAL_FAILURE(s1->GetMax());
}

TEST( TestTimeOfIntSetGetMax, test3) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(50000, randomInt);
    ASSERT_NO_FATAL_FAILURE(s1->GetMax());
}

TEST( TestTimeOfIntSetGetMax, test4) {
    Set<int> *s1 = new Set<int>;
    s1->Generate(100000, randomInt);
    ASSERT_NO_FATAL_FAILURE(s1->GetMax());
}

TEST( TestTimeOfFloatSetGetMax, test0) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(100, randomFloat);
    ASSERT_NO_FATAL_FAILURE(s1->GetMax());
}

TEST( TestTimeOfFloatSetGetMax, test1) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(1000, randomFloat);
    ASSERT_NO_FATAL_FAILURE(s1->GetMax());
}

TEST( TestTimeOfFloatSetGetMax, test2) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(10000, randomFloat);
    ASSERT_NO_FATAL_FAILURE(s1->GetMax());
}

TEST( TestTimeOfFloatSetGetMax, test3) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(50000, randomFloat);
    ASSERT_NO_FATAL_FAILURE(s1->GetMax());
}

TEST( TestTimeOfFloatSetGetMax, test4) {
    Set<float> *s1 = new Set<float>;
    s1->Generate(100000, randomFloat);
    ASSERT_NO_FATAL_FAILURE(s1->GetMax());
}

TEST( TestTimeOfComplexSetGetMax, test0) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(100, randomComplex);
    ASSERT_NO_FATAL_FAILURE(s1->GetMax());
}

TEST( TestTimeOfComplexSetGetMax, test1) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(1000, randomComplex);
    ASSERT_NO_FATAL_FAILURE(s1->GetMax());
}

TEST( TestTimeOfComplexSetGetMax, test2) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(10000, randomComplex);
    ASSERT_NO_FATAL_FAILURE(s1->GetMax());
}

TEST( TestTimeOfComplexSetGetMax, test3) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(50000, randomComplex);
    ASSERT_NO_FATAL_FAILURE(s1->GetMax());
}

TEST( TestTimeOfComplexSetGetMax, test4) {
    Set<Complex> *s1 = new Set<Complex>;
    s1->Generate(100000, randomComplex);
    ASSERT_NO_FATAL_FAILURE(s1->GetMax());
}


TEST( TestTimeOfStringSetGetMax, test0) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(100, randomString);
    ASSERT_NO_FATAL_FAILURE(s1->GetMax());
}

TEST( TestTimeOfStringSetGetMax, test1) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(1000, randomString);
    ASSERT_NO_FATAL_FAILURE(s1->GetMax());
}

TEST( TestTimeOfStringSetGetMax, test2) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(10000, randomString);
    ASSERT_NO_FATAL_FAILURE(s1->GetMax());
}

TEST( TestTimeOfStringSetGetMax, test3) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(50000, randomString);
    ASSERT_NO_FATAL_FAILURE(s1->GetMax());
}

TEST( TestTimeOfStringSetGetMax, test4) {
    Set<string> *s1 = new Set<string>;
    s1->Generate(100000, randomString);
    ASSERT_NO_FATAL_FAILURE(s1->GetMax());
}

int main(int argc, char *argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
