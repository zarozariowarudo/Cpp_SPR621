#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <cstring>


struct Book {
	char name[50];
	char author[50];
	char publication[50];
	char theme[50];
	int publishingYear;
	int price;
};

using BookStrField = char (Book::*)[50];
using BookIntField = int(Book::*);

enum class FieldKind {
	Str,
	Int
};

struct FieldOption {
	int id;
	const char* label;
	FieldKind kind;
	union {
		BookStrField strField;
		BookIntField intField;
	};
};

void showBook(struct Book* arrB, int* size, int idx = -1)
{
	if (idx != -1)
	{
		int i = idx;
		printf("\n-------------{  %d  }-------------\nBook's name: %s, \nAuthor: %s, \nIt's publish edition: %s, \nYear: %d, \nTopic: %s, \n And finally - price: %d\n",
			i, arrB[i].name, arrB[i].author, arrB[i].publication, arrB[i].publishingYear, arrB[i].theme, arrB[i].price);
		printf("------------------------------- \n\n");
		return;
	}
	for (int i = 0; i < *size; i++)
	{
		printf("\n-------------{  %d  }-------------\nBook's name: %s, \nAuthor: %s, \nIt's publish edition: %s, \nYear: %d, \nTopic: %s, \n And finally - price: %d\n",
			i, arrB[i].name, arrB[i].author, arrB[i].publication, arrB[i].publishingYear, arrB[i].theme, arrB[i].price);
		printf("------------------------------- \n\n");
	}
}

void ChangeData(struct Book *arrB, int *size, int idx)
{
	showBook(arrB, size, idx);

	FieldOption options[] = {
		{1, "name",            FieldKind::Str, {.strField = &Book::name}},
		{2, "author",          FieldKind::Str, {.strField = &Book::author}},
		{3, "publication",     FieldKind::Str, {.strField = &Book::publication}},
		{4, "theme",           FieldKind::Str, {.strField = &Book::theme}},
		{5, "publishingYear",  FieldKind::Int, {.intField = &Book::publishingYear}},
		{6, "price",           FieldKind::Int, {.intField = &Book::price}}
	};
	int optionsCount = sizeof(options) / sizeof(options[0]);

	printf("Choose field to edit:\n");
	for (int i = 0; i < optionsCount; ++i) {
		printf("  %d - %s\n", options[i].id, options[i].label);
	}

	int choice = 0;
	scanf_s("%d", &choice);

	const FieldOption* selected = nullptr;
	for (int i = 0; i < optionsCount; ++i) {
		if (options[i].id == choice) {
			selected = &options[i];
			break;
		}
	}

	if (selected->kind == FieldKind::Str)
	{
		char newValue[50];
		printf("Enter new %s: ", selected->label);
		scanf_s(" %49[^\n]", &newValue, (unsigned)sizeof(newValue));
		strcpy_s(arrB[idx].*(selected->strField),
			sizeof(arrB[idx].*(selected->strField)),
			newValue);
	}
	else
	{
		int newValue;
		printf("Enter new %s: ", selected->label);
		scanf_s("%d", &newValue);
		arrB[idx].*(selected->intField) = newValue;
	}
		
}

void lookUpTo(struct Book* arrB, int* size, BookStrField field,
	const char* key)
{
	for (int i = 0; i < *size; i++)
	{
		if (strcmp(arrB[i].*field, key) == 0)
		{
			showBook(arrB, size, i);
			return;
		}
	}
	printf("Nothing found by [%s]", key);
}

int main()
{
	int size = 5;
	struct Book library[5] = {
		{"1984", "George Orwell", "Secker & Warburg", "Dystopian", 1949, 350},
		{"The Hobbit", "J.R.R. Tolkien", "Allen & Unwin", "Fantasy", 1937, 420},
		{"Dune", "Frank Herbert", "Chilton Books", "Sci-Fi", 1965, 500},
		{"The Witcher", "Andrzej Sapkowski", "SuperNOWA", "Fantasy", 1993, 380},
		{"It", "Stephen King", "Viking Press", "Horror", 1986, 460}
	};

	int input;
	int sinput;
	char cinput[50];
	do
	{
		printf("\nWhat do you want to do: \n\t1 - show all books \n\t2- change data \n\t3 - look up to book by author's name \n\t4 - ... by book's name \n\t5 - ... by publishing \n\t6 - ... by theme \n\t0 - exit\n");
		scanf_s("%d", &input);

		switch (input)
		{
		case 1:
			showBook(library, &size);
			break;
		case 2:
			printf("Enter num of book you want to change: ");
			scanf_s("%d", &sinput);
			ChangeData(library, &size, sinput);
			break;
		case 3:
			printf("Enter author's name: ");
			scanf_s(" %49[^\n]", cinput, (unsigned)sizeof(cinput));
			lookUpTo(library, &size, &Book::author, cinput);
			break;
		case 4:
			printf("Enter book's name: ");
			scanf_s(" %49[^\n]", cinput, (unsigned)sizeof(cinput));
			lookUpTo(library, &size, &Book::name, cinput);
			break;
		case 5:
			printf("Enter publishing name: ");
			scanf_s(" %49[^\n]", cinput, (unsigned)sizeof(cinput));
			lookUpTo(library, &size, &Book::publication, cinput);
			break;
		case 6:
			printf("Enter theme's name: ");
			scanf_s(" %49[^\n]", cinput, (unsigned)sizeof(cinput));
			lookUpTo(library, &size, &Book::theme, cinput);
			break;
		}
	} while (input != 0);

	

	return 0;
}