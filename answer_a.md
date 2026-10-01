# PART (a) – Hash Table Using Division Method

### Given Song IDs
105, 210, 315, 420, 525, 630, 735, 840

### Hash Function
`h(k) = k mod 10`

### Collision Resolution
Linear probing is used.

| Song ID | Hash value | Collision | Final position |
|---:|---:|---|---:|
| 105 | 5 | No | 5 |
| 210 | 0 | No | 0 |
| 315 | 5 | At 5 (105) | 6 |
| 420 | 0 | At 0 (210) | 1 |
| 525 | 5 | At 5, 6 | 7 |
| 630 | 0 | At 0, 1 | 2 |
| 735 | 5 | At 5, 6, 7 | 8 |
| 840 | 0 | At 0, 1, 2 | 3 |

### Final Hash Table

| Index | Value |
|---:|---:|
| 0 | 210 |
| 1 | 420 |
| 2 | 630 |
| 3 | 840 |
| 4 | Empty |
| 5 | 105 |
| 6 | 315 |
| 7 | 525 |
| 8 | 735 |
| 9 | Empty |

**Number of collisions:** 10.

The program `part_a.c` displays the table after every insertion.
