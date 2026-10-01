# PART (b) – Search Using Hashing and Linear Search

For demonstration, the search IDs used are **315, 630 and 999**.

| Search ID | Hashing | Hash comparisons | Linear Search | Linear comparisons |
|---:|---|---:|---|---:|
| 315 | Found at index 6 | 2 | Found | 3 |
| 630 | Found at index 2 | 3 | Found | 6 |
| 999 | Not found | 0 | Not found | 8 |

### Search using Hashing
The hash value is calculated first. Because linear probing was used during insertion, the program checks consecutive positions until the key is found or an empty position is reached.

### Search using Linear Search
The array is checked from the first element to the last element until the required ID is found or the complete array is checked.

The program `part_b.c` performs both searches and records the comparisons.
