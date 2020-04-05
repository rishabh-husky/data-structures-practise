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
			
			int capacity = collection.capacity();

			for(int i = 1; i <= capacity; i++) 
			{
				collection.pushToBuffer(i * 10);
			}

			int key;
			for (int i = 1; i <= capacity; i++)
			{
				 key = collection.popFromBuffer();  
				 Assert::AreEqual(i * 10, key);
			}
		}

		TEST_METHOD(empty)
		{
			CircularBuffer collection;

			Assert::IsTrue(collection.isEmpty());

			int capacity = collection.capacity();

			for (int i = 1; i <= capacity; i++)
			{
				collection.pushToBuffer(i * 10);
			}

			for (int i = 1; i <= capacity; i++)
			{
				collection.popFromBuffer();
			}

			Assert::IsTrue(collection.isEmpty());
		}


		TEST_METHOD(full)
		{
			CircularBuffer collection;

			int capacity = collection.capacity();

			for (int i = 1; i <= capacity; i++)
			{
				collection.pushToBuffer(i * 10);
			}

			Assert::IsTrue(collection.isFull());
		}


		TEST_METHOD(midWidow)
		{
			CircularBuffer collection;

			int capacity = collection.capacity();

			for (int i = 1; i <= capacity; i++)
			{
				collection.pushToBuffer(i * 10);
			}
			Assert::AreEqual(10, collection.popFromBuffer());
			collection.pushToBuffer(10);
			Assert::AreEqual(20, collection.popFromBuffer());
			collection.pushToBuffer(20);
			Assert::IsTrue(collection.isFull());
		}

		TEST_METHOD(popEmptyBufferException) 
		{
			try {
				CircularBuffer collection;
				collection.popFromBuffer();
			} catch (int e) {
				Assert::AreEqual(CircularBuffer::POP_BUFFER_EMPTY, e);
			}
		}


		TEST_METHOD(pushToFullBufferException)
		{
			CircularBuffer collection;
			int capacity = collection.capacity();

			for (int i = 1; i <= capacity; i++)
			{
				collection.pushToBuffer(i * 10);
			}
			try {
				collection.pushToBuffer(10);
			} catch (int e) {
				Assert::AreEqual(CircularBuffer::BUFFER_FULL, e);
			}
		}
	};
}
