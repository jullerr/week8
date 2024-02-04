#include <gtest/gtest.h>
#include <set>
#include <sstream>
#include "headers/task03a.h"

TEST(AppTest, RunTest) {
    App application;
    std::string userInput = "2 4 6 8 10";
    std::set<int> expectedOutput = {2, 4, 6, 8, 10};
    std::set<int> result = application.run(userInput);
    ASSERT_EQ(result, expectedOutput);
}
