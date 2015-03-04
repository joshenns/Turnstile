#include <iostream>
using namespace std;

class turnstile {
	private:
		bool open;

	public:
		~turnstile() {};
		virtual turnstile* pay() = 0;
		virtual turnstile* pass() = 0;
		void setStatus(bool);
		void printStatus();
};

class turnstileOpen : public turnstile {
	public: 
		turnstileOpen();
		turnstile* pay();
		turnstile* pass();
};

class turnstileClosed : public turnstile {
	public:
		turnstileClosed();
		turnstile* pay();
		turnstile* pass();
};

