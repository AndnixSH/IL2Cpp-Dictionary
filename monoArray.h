template <typename T>
struct monoArray
{
	void* klass;
	void* monitor;
	void* bounds;
	int   max_length;
	void* vector [1];
	int getLength()
	{
	    return max_length;
	}
	T getPointer()
	{
	    return (T)vector;
	}	
	T operator [] (int i) {
		return getPointer()[i];
	}	
	const T operator [] (int i) const {
		return getPointer()[i];
	}
};
