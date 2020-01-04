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

A test;

TEST(BrokenDiscovery, BrokenDiscovery)
{
    EXPECT_EQ(1, 1);
    EXPECT_TRUE(true);
}
