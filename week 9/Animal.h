class Animal
{
public:
	virtual void speak(void) = 0;
};
class Sheep : public Animal
{
public:
	void speak(void) {
		cout << "Sheep says: \t\tbaa!" << endl;
	}
};
class Cow : public Animal
{
public:
	void speak(void) {
		cout << "Cow says: \t\tmoo!" << endl;
	}
};
class Frisian : public Cow
{
	void speak(void) {
		cout << "Frisian Cow says: \tmoo (in black and white)!" << endl;
	}
};

