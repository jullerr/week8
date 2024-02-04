#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <sstream>
#include "headers/task03b.h"

TEST(Task03bTest, RunTest) {
    std::stringstream expectedOutput;
    expectedOutput << "2\n";
    expectedOutput << "English\n";
    expectedOutput << "Spanish\n";
    expectedOutput << "3\n";
    expectedOutput << "German\n";
    expectedOutput << "French\n";
    expectedOutput << "Italian\n";

    Application app;

    std::map<std::string, std::vector<std::string>> result = app.run();

    testing::internal::CaptureStdout();
    std::cout << result["commonLanguages"].size() << std::endl;
    printVector(result["commonLanguages"]);
    std::cout << result["uniqueLanguages"].size() << std::endl;
    printVector(result["uniqueLanguages"]);
    std::string actualOutput = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actualOutput, expectedOutput.str());
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
