#include <stdio.h>
#include <string.h>

typedef struct {
	char bezeichnung[8];
	int typ; // 0=NPN, 1=PNP
	char verwendungszweck[40];
	char gehaeuse[6];
	int verstaerkungsfaktor;
} Transistor;

struct Date {
	int tag;
	int monat;
	int jahr;
};


void print_transistor(Transistor *tr){
	printf("bez: %s\ntyp: %i\ngeh: %s\nverst: %i\n", tr->bezeichnung, tr->typ, tr->gehaeuse, tr->verstaerkungsfaktor);
}

void print_date(struct Date *d){
	printf("%i.%i.%i\n", (*d).tag, (*d).monat, (*d).jahr);
	printf("%i.%i.%i\n", d->tag, d->monat, d->jahr);
}

int main(){
	struct Date mydate = {13, 5, 2023};
	Transistor tr = {"tr-50-76", 1, "fuer eine leiterplatte ...", "sot-4", 10};
	print_transistor(&tr);
	print_date(&mydate);
	return 0;
}
