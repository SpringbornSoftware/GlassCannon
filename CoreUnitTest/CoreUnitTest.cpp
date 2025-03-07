#include "pch.h"
#include "CppUnitTest.h"

#include "App.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CoreUnitTest
{
	TEST_CLASS(CoreUnitTest)
	{
	public:
		
		TEST_METHOD(AppConnectionTest)
		{
			Assert::IsTrue(testFunction());
		}
	};
}
