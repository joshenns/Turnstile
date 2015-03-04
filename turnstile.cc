#include "turnstile.h"

void turnstile::setStatus(bool x) {
	open = x; 
}

void turnstile::printStatus() { 
	if(open) 
		cout << endl << "Open"; 
	else 
		cout << endl << "Closed"; }

turnstileOpen::turnstileOpen() { 
	setStatus(true); 
}

turnstile* turnstileOpen::pay() { 
	return this; 
}

turnstile* turnstileOpen::pass() { 
	delete this; 
	return new turnstileClosed(); 
}

turnstileClosed::turnstileClosed() { 
	setStatus(false); 
}

turnstile* turnstileClosed::pay() { 
	delete this; 
	return new turnstileOpen(); 
}

turnstile* turnstileClosed::pass() { 
	return this; 
}

