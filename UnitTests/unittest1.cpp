#include "stdafx.h"
#include "CppUnitTest.h"
#include "vectesty.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here
			VecTesty aVecTesty;

			Assert::AreEqual(0, aVecTesty.avectesty(), L"valid results return zero for avectesty.");


		}

	};
}