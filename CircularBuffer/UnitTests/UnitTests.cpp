#include "pch.h"
#include "CppUnitTest.h"
#include "../CircularBuffer/CircularBuffer.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		
		TEST_METHOD(push)
		{
			CircularBuffer collection;

			Assert::IsTrue(collection.isEmpty());
			
			int capacity = collection.capacity();
			for(int i = 1; i <= capacity; i++) 
			{
				collection.pushToBuffer(i * 10);
			}

			Assert::IsTrue(collection.isFull());

			int key;
			for (int i = 1; i <= capacity; i++)
			{
				 key = collection.popFromBuffer();
				 Assert::AreEqual(i * 10, key);
			}
		}
	};
}
