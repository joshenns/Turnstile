#include "turnstile.h"
//#include "turnstileOpen.h"
//#include "turnstileClosed.h"


int main() {

	turnstile * ptr = new turnstileClosed();

	ptr->printStatus();

	delete ptr;

	ptr = new turnstileOpen();

	ptr->printStatus();

	ptr = ptr->pass();
	ptr->printStatus();

	ptr = ptr->pay();
	ptr->printStatus();

	ptr = ptr->pay();
	ptr->printStatus();

	ptr = ptr->pass();
	ptr->printStatus();

	ptr = ptr->pass();
	ptr->printStatus();

	delete ptr;
    
	cout << endl << endl << "All done!" << endl << endl;
	 
	return 0;
}
