# UVa 540 - Team Queue

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 540
- **Problem Title:** Team Queue
- **Problem Link:** https://onlinejudge.org/external/5/540.pdf
- **Source Code (Fail):** No failed version
- **Source Code (Correct/Accepted):** [src/UVa540.cpp](./src/UVa540.cpp)

## 2. Problem Statement in My Own Words

The problem simulates a queue with teams. When a person enters the queue, if someone from the same team is already waiting, the new person should stand behind their teammates. If no teammate is in the queue, the team joins the end of the main queue.

For `DEQUEUE`, the person at the front of the first team in the main queue leaves.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

A normal queue is not enough because people from the same team must stay together. I need to know each person's team and also maintain the order of teams currently in the queue.

### Final Strategy

I use an `unordered_map` to record each person's team ID.

Then I use:

- `mainQueue` to store the order of teams.
- `teamQueues[teamId]` to store people inside each team.

When a person is enqueued, I check whether their team queue is empty. If it is empty, I add the team ID to `mainQueue`. Then I add the person to their team queue.

When dequeuing, I remove a person from the team at the front of `mainQueue`. If that team becomes empty, I remove the team from `mainQueue`.

## 4. Pseudocode

```text
START

scenario = 1

While team count is not 0:
    Read all teams and build person-to-team map
    Create main team queue
    Create queue for each team

    While command is not STOP:
        If command is ENQUEUE:
            Read person
            Find person's team
            If that team queue is empty:
                Push team into main queue
            Push person into team queue

        If command is DEQUEUE:
            Find front team from main queue
            Print front person of that team
            Pop that person
            If team queue becomes empty:
                Pop team from main queue

    Print blank line
    scenario++

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No failed version was saved for this problem.

**Why it failed:**

- This submitted version was correct.

### Correct Code

See [src/UVa540.cpp](./src/UVa540.cpp).

**Why it works:**

- It records each person's team.
- It keeps the order of active teams.
- It keeps the order of people inside each team.
- It correctly handles `ENQUEUE`, `DEQUEUE`, and `STOP`.
- It prints the required scenario format.

## 6. Difference and Reflection

### Key Differences

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic | No failed version | Uses one main queue and team queues |
| Edge Cases | No failed version | Handles team becoming empty |
| Output Handling | No failed version | Prints scenario number and blank line |
| Other | No failed version | Submitted version was correct |

### Reflection

I learned that some queue problems need more than one queue. In this problem, the main queue keeps team order, while each team queue keeps the order of people in the same team. Splitting the problem this way makes the simulation clearer.
