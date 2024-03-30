#include"doma.cpp"
#include<gtest/gtest.h>

TEST(test1,empty){
    std::deque<int> input;
    std::deque<int> output;
    ASSERT_EQ(result(input), output);

}

TEST(test,test1){
std::deque<int> input={1,3,2};
std::deque<int> output={1,2};
ASSERT_EQ(result(input), output);

}


TEST(test, test2) {
    std::deque<int> input = { 4, 3, 2, 1 };
    std::deque<int> output = { 0, 1, 2, 3 };
    ASSERT_EQ(result(input), output);
}

TEST(test, test3) {
    std::deque<int> input = { 1, 3, 2, 4 };
    std::deque<int> output = { 3 };
    ASSERT_EQ(result(input), output);
}

TEST(test, test4) {
    std::deque<int> input = { 5, 4, 3, 2, 1 };
    std::deque<int> output = { 0, 1, 2, 3, 4 };
    ASSERT_EQ(result(input), output);
}

TEST(test, test5) {
    std::deque<int> input = { 1, 2, 3, 4, 5 };
    std::deque<int> output = { 4 };
    ASSERT_EQ(result(input), output);
}

TEST(test, test6) {
    std::deque<int> input = { 1, 3, 2, 4, 1 };
    std::deque<int> output = { 3, 4 };
    ASSERT_EQ(result(input), output);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}