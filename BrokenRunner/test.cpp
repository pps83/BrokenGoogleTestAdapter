#include "pch.h"
#include <filesystem>

class A
{
public:
    A()
    {
        for (auto& p : std::filesystem::directory_iterator("some dir"))
        {
        }
    }
};

TEST(BrokenRunner, BrokenRunner)
{
    //A test;
    EXPECT_EQ(1, 1);
    EXPECT_TRUE(true);
}
