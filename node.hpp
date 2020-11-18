class ListOfNumbers {
private:
	int number;
	ListOfNumbers *next;
public:
	ListOfNumbers();
	ListOfNumbers(int v);
    
    void Add(int v);
	void SetValue(int v);
	void SetNext(ListOfNumbers *n);

	// Prints a single item’s number
	void PrintItem();

	// Prints the whole list
	void PrintList();		

	// Recursive add
	void AddR(int v);

	ListOfNumbers *find (int Value);
	ListOfNumbers *findR (int Value);

	//Sorting
	ListOfNumbers *Sort();

	//Destructor
	~ListOfNumbers();

	ListOfNumbers *Remove (int v);


};