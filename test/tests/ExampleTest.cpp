/*
 * TestExampleTest.cpp
 *
 *  Created on: 21 May 2018
 *      Author: eser
 */

// CppuTest includes
#include "CppUTest/TestHarness.h"

// Header for unit under test


//Declare a test group
TEST_GROUP(Example) {

	// Declare a setup method.. Optional
	void setup () {

	}

	// Declare a tearDown method.. Optional
	void teardown () {

	}
};

TEST(Example, Test1)
{
   FAIL("Fail me!");
}

