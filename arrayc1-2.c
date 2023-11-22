#include <stdio.h>
int main() {
int arr[100], n, i, j, choice, pos, item;
printf("Enter the size of the array: ");
scanf("%d", &n);
printf("Enter the elements:\n");
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);}
while (1) {
printf("\n1) Insertion\n2) Deletion\n3) Traversing\n4) Search\n5) Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("Enter the position to insert: ");
scanf("%d", &pos);
printf("Enter the item: ");
scanf("%d", &item);
if (pos < 0 || pos > n) {
printf("Invalid position.\n");}
else {
for (i = n - 1; i >= pos; i--) {
arr[i + 1] = arr[i];}
arr[pos] = item;
n++;
printf("Element inserted successfully.\n");}
break;
case 2:
printf("Enter the position to delete: ");
scanf("%d", &pos);
if (pos < 0 || pos >= n) {
printf("Invalid position.\n");} 
else {
for (i = pos; i < n - 1; i++) {
arr[i] = arr[i + 1];}
n--;
printf("Element deleted successfully.\n");}
break;
case 3:
printf("Array Elements: ");
for (i = 0; i < n; i++) {
printf("%d ", arr[i]);}
printf("\n");
break;
case 4:
printf("Enter the element to search: ");
scanf("%d", &item);
for (i = 0; i < n; i++) {
if (arr[i] == item) {
printf("%d found at index %d.\n", item, i);
break;}}
if (i == n) {
printf("%d not found in the array.\n", item);}
break;
case 5:
return 0;
default:
printf("Invalid choice. Please try again.\n");}}
return 0;
}

