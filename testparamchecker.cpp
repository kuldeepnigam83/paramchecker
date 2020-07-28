#include "paramchecker.h"
#include <gtest/gtest.h>
 
TEST(VitalsTest, BPM) { 
    ASSERT_EQ(true, vitalsAreOk(100, 100, 50));
}

TEST(VitalsTest, BPM_MinOutOfRange) { 
    ASSERT_EQ(false, vitalsAreOk(60, 100, 50));
}

TEST(VitalsTest, BPM_MaxOutOfRange) { 
    ASSERT_EQ(false, vitalsAreOk(160, 100, 50));
}


TEST(VitalsTest, SPO2) {
    ASSERT_EQ(true, vitalsAreOk(100, 90, 50));
}

TEST(VitalsTest, SPO2_MinOutOfRange) {
    ASSERT_EQ(false, vitalsAreOk(100, 40, 50));
}

TEST(VitalsTest, SPO2_MaxOutOfRange) {
    ASSERT_EQ(false, vitalsAreOk(100, 0xfffff, 50));
}
 
TEST(VitalsTest, RESP) {
    ASSERT_EQ(true, vitalsAreOk(100, 90, 50));
}

TEST(VitalsTest, RESP_MinOutOfRange) {
    ASSERT_EQ(false, vitalsAreOk(100, 70, 20));
}

TEST(VitalsTest, RESP_MaxOutOfRange) {
    ASSERT_EQ(false, vitalsAreOk(100, 70, 70));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
