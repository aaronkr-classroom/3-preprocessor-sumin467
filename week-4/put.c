#include<stdio.h>
#define MESSAGE "I`m sleepy"
#define KO_MSG "�������"

int main(void) {
	printf("Using printf(): %s",MESSAGE);

	puts("\nUsing puts()");
	puts(KO_MSG);

	for (int i = 0; MESSAGE[i] != '\0'; i++) {
		putchar(MESSAGE[i]);
	}
	puts("\nUSing putc(): ");
	for (int i = 0; KO_MSG[i] != '\0'; i++) {
		putc(KO_MSG[i], stdout);
	}
	return 0;
}