# Djikstra-Project-Documentation
Documentation of a basic project implementing Djikstra Algorithm

## Repository Choosen -  **crixodia/python‑dijkstra**

## Features

* Computes **shortest paths** and **distances** from a source node to all others.
* Fully supports **directed** and **undirected graphs** with **weighted edges**.
* Returns:

  * all shortest paths
  * distances
  * specific path/distance between any two nodes
* Optional **Graphviz** integration for visualizing graphs.

---

## Algorithm

Implements **Dijkstra’s algorithm** over an adjacency matrix:

* Time complexity: $O(n^2)$
* Uses simple list-based minimum selection (no priority queue)
* Suitable for **small to mid-sized dense graphs**

---

## Function Overview

### `find_all(wmat, start, end=-1)`

* Returns shortest **distances** and **paths** from `start` to all nodes (or just `end` if specified).

### `find_shortest_path(wmat, start, end=-1)`

* Returns only the **shortest path(s)**.

### `find_shortest_distance(wmat, start, end=-1)`

* Returns only the **shortest distance(s)**.

---

## Project Structure

```bash
python-dijkstra/
│
├── dijkstra.py         # Core implementation
├── dijkstra_test.py    # Test cases and usage examples
├── draw_graph.py       # Optional graph visualization
├── assets/             # Graphviz assets for rendering
├── README.md           # Project documentation

```

---
