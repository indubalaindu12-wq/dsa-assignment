# PART (c) – Collision Analysis, Load Factor, Complexity and Conclusion

## 1. Effect of Collisions

Several song IDs have the same initial hash position.

For example:

- 105 → 5
- 315 → 5
- 525 → 5
- 735 → 5

Also:

- 210 → 0
- 420 → 0
- 630 → 0
- 840 → 0

Therefore, collisions occur frequently. Linear probing resolves them by moving to the next available position.

## 2. Load Factor

Load factor:

`α = n / m`

where:
- `n = 8` stored song IDs
- `m = 10` hash-table positions

Therefore:

`α = 8/10 = 0.80`

So the load factor is **0.80 or 80%**.

A high load factor increases the probability of collisions in open addressing.

## 3. Complexity

| Operation | Hashing – Average | Hashing – Worst | Linear Search |
|---|---|---|---|
| Search | O(1) expected | O(n) | O(n) |
| Insertion | O(1) expected | O(n) | — |
| Extra space | O(m) | O(m) | O(1) |

## 4. Performance Comparison

For the tested data:

| Search ID | Hashing comparisons | Linear Search comparisons |
|---:|---:|---:|
| 315 | 2 | 3 |
| 630 | 3 | 6 |
| 999 | 0 | 8 |

The observed results show fewer comparisons for hashing for these search keys.

## 5. Final Conclusion

Hashing with the division method and linear probing is suitable for a music application when frequent song-ID lookup is required. Its expected search time is O(1), while linear search takes O(n) on average.

However, collisions must be considered. With a load factor of 0.80, the table is relatively full, so choosing an appropriate table size and managing the load factor can improve performance.

Therefore, based on the execution results and complexity analysis, hashing provides efficient expected lookup performance for this application.

**Important:** The supplied image does not visibly specify the table size or the exact search IDs. This prepared answer uses table size 10 and search IDs 315, 630, and 999. Replace them if your original question paper gives different values.
