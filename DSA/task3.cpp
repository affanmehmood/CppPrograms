#include "pch.h"
#include <iostream>
using namespace std;

class Queue {
	struct Person {
		int id;
		int pages;
		Person *next;

		Person() {
			static int count = 1;
			id = count++;
			pages = 0;
			next = NULL;
		}
	};

	Person *head, *tail;
	int size;

	public:
		Queue() {
			head = NULL;
			tail = NULL;
			size = 0;
		}

		// Smallest Job Next Scheduling
		void enqueue(int pages) {
			Person *person = new Person;
			person->pages = pages;
			
			if (head == NULL && tail == NULL) {
				head = person;
				tail = person;
			} else {
				if (person->pages < head->pages) {
					person->next = head;
					head = person;
				} else if (person->pages >= tail->pages) {
					tail->next = person;
					tail = person;
				} else {
					Person *previous = head, *current = head->next;
					for (int i = 0; i < length(); i++) {
						if (person->pages >= previous->pages && person->pages < current->pages) {
							person->next = current;
							previous->next = person;
							break;
						}
						previous = current;
						current = current->next;
					}
				}
			}
			size++;
		}

		int dequeue() {
			int id = head->id;
			Person *toRemove = head;
			head = head->next;
			toRemove->next = NULL;
			delete toRemove;
			size--;
			return id;
		}

		bool isEmpty() {
			return size == 0;
		}

		int length() {
			return size + 1;
		}

		void displayQueue() {
			if (!isEmpty()) {
				Person *cursor = head;
				for (int i = 0; i < length() - 1; i++) {
					cout << "Person: " << cursor->id << "\tPages: " << cursor->pages << "\n";
					cursor = cursor->next;
				}
			} else {
				throw "\nQUEUE IS EMPTY\n";
			}
		}
};

int main() {
	Queue p;
	int pages[5] = { 10, 2, 8, 7, 12 };
	for (int i = 0; i < 5; i++)
		p.enqueue(pages[i]);
	p.displayQueue();
	return 0;
}
