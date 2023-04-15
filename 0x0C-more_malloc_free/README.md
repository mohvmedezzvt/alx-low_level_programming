# 0x0C. C - More malloc, free
This directory contains C programs that use dynamic memory allocation and deallocation with malloc, free, and realloc.

## Files
Here are the files in this directory and what they do:

- ### 0-malloc_checked.c: 
    Contains the function malloc_checked() that allocates memory using malloc(). If malloc() fails to allocate the necessary memory, the function causes the program to exit with a status value of 98.
- ### 1-string_nconcat.c: 
    Contains the function string_nconcat() that concatenates two strings. The function takes two arguments: s1, which is a pointer to the first string, and s2, which is a pointer to the second string. The function allocates enough memory to hold both strings plus one extra byte for the null terminating character. If n is less than or equal to the length of s2, the function concatenates only the first n bytes of s2. Otherwise, the function concatenates the entire s2 string.
- ### 2-calloc.c: 
    Contains the function _calloc() that allocates memory for an array of elements using malloc(). The function takes two arguments: nmemb, which is the number of elements to allocate, and size, which is the size of each element in bytes. The function sets the allocated memory to zero and returns a pointer to the allocated memory. If nmemb or size is zero, the function returns NULL.
- ### 3-array_range.c: 
    Contains the function array_range() that creates an array of integers. The function takes two arguments: min, which is the smallest value of the integers in the array, and max, which is the largest value of the integers in the array. The function allocates enough memory to hold all the integers between min and max, inclusive. The function returns a pointer to the array of integers.
- ### 100-realloc.c: 
    Contains the function _realloc() that reallocates memory using malloc() and free(). The function takes three arguments: ptr, which is a pointer to the previously allocated memory, old_size, which is the size of the allocated memory in bytes, and new_size, which is the new size of the allocated memory in bytes. The function returns a pointer to the reallocated memory. If new_size is equal to old_size, the function returns ptr unchanged. If new_size is zero and ptr is not NULL, the function frees the memory pointed to by ptr and returns NULL. If ptr is NULL, the function behaves like malloc() and allocates memory of size new_size.

## Author
These programs were written by Mohamed Ezzat as part of the ALX Software Engineering program.

[LinkedIn Profile](https://www.linkedin.com/in/mohamed-ezzat01/) | [GitHub Profile](https://github.com/mohvmedezzvt)
