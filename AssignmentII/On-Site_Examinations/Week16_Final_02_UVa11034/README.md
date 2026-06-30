# UVa 11034 - Ferry Loading IV

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 11034
- **Problem Title:** Ferry Loading IV
- **Problem Link:** https://onlinejudge.org/external/110/11034.pdf
- **Source Code (Fail):** No original final exam code was submitted
- **Source Code (Correct/Accepted):** [src/UVa11034.cpp](./src/UVa11034.cpp)

## 2. Problem Statement in My Own Words

The problem gives a ferry length and a list of cars waiting on the left or right river bank. The ferry starts on the left bank.

For each trip, the ferry can carry cars from the current bank in queue order until it is full. Then it crosses to the other side. I need to count how many crossings are needed to transport all cars.

## 3. Thinking Logic and Solution Strategy

No original final exam code was submitted for this problem. This version was completed later for the archive.

I use two queues, one for cars on the left bank and one for cars on the right bank. The ferry always loads cars from the bank where it currently is.

After loading as many cars as possible, the ferry crosses the river, so I increase the trip count and switch sides.

## 4. Pseudocode

```text
Read test case count

For each test case:
    Read ferry length and car count
    Convert ferry length from meters to centimeters

    Put cars into left or right queue

    ferry starts on left
    trips = 0

    While either queue is not empty:
        currentLoad = 0

        Load cars from current side while they fit

        trips++
        Switch ferry side

    Print trips
```

## 5. Fail Code vs Correct Code

### Fail Code

No original final exam code was submitted for this problem.

**Why it failed:**

- I did not submit this problem during the final exam.

### Correct Code

See [src/UVa11034.cpp](./src/UVa11034.cpp).

**Why it works:**

- It separates cars by river bank using two queues.
- It preserves the input order of cars on each side.
- It loads as many cars as possible on each trip.
- It counts every ferry crossing.
- It stops when both queues are empty.

## 6. Difference and Reflection

I learned that queue simulation is useful when order must be preserved. This problem also reminded me to convert the ferry length from meters to centimeters before comparing it with car lengths.
