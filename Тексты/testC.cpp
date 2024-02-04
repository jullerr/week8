#include "headers/task03c.h"
#include <gtest/gtest.h>

TEST(IsValidBracketsTest, ValidInput) {
    std::set<std::string> validInputs = {"()", "{}", "[]", "()[]{}", "{[()]}"};
    for (const std::string& input : validInputs) {
        EXPECT_TRUE(isValidBrackets(input));
    }
}
