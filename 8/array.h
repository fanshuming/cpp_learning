#pragma once

class Array{
	private:
		int length;
		int * space;
	public:
		Array(int length);
		Array(const Array & array);
		int getLength();
		void setData(int index, int value);
		int getData(int index);

		~Array();
};
