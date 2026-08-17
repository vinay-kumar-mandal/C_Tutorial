# ⚡ Deep-Dive C & Systems Programming Masterclass

> A comprehensive, low-level reference guide and documentation to master C from standard syntax up to OS-level systems engineering, memory management, and compiler internals.

---

## 🗺️ Master Curriculum & Deep-Dive Index

---

### 🛠️ Module 0: Compiler Toolchain, Build Systems & Binary Internals
- [ ] **0.1 Compilation Pipeline Mechanics**
  - Preprocessing (`gcc -E`), Compilation (`-S` Assembly generation), Assembly (`-c` Object file), and Linking.
  - Understanding ELF (Executable and Linkable Format) binary structure: `.text`, `.data`, `.bss`, `.rodata`.
- [ ] **0.2 GCC/Clang Advanced Flags & Tooling**
  - Optimization levels (`-O0`, `-O2`, `-O3`, `-Ofast`).
  - Strict Diagnostics: `-Wall -Wextra -Werror -pedantic`.
  - Debugging symbols (`-g3`) and Sanitizers (`-fsanitize=address,undefined`).
- [ ] **0.3 Build Automation & Debugging Infrastructure**
  - Writing modular Makefiles (automatic variables, targets, dependencies).
  - Deep-dive into **GDB** (breakpoints, memory inspection `x/32xb`, stack unwinding, register inspection).

---

### 🔣 Module 1: Type System, Memory Layout & Bitwise Engineering
- [ ] **1.1 Primitive Types & Binary Representation**
  - Two's complement integer representation, signedness overflow vs wrap-around.
  - IEEE 754 Floating-Point layout (Sign, Exponent, Mantissa) & precision limits.
  - Little-Endian vs Big-Endian architecture & Network Byte Order (`htons`, `ntohl`).
- [ ] **1.2 Type Promotions & Implicit Conversions**
  - Integer Promotion rules, Usual Arithmetic Conversions.
  - Sign extension traps and Explicit type casting (`(void*)`, `(uintptr_t)`).
- [ ] **1.3 Bitwise Manipulation Hacks**
  - Bitwise operations (`&`, `|`, `^`, `~`, `<<`, `>>`).
  - Bitmasks, setting/clearing/toggling bits, parity checks, power-of-two tests.

---

### 🧠 Module 2: Memory Architecture & Deep Pointer Mechanics
- [ ] **2.1 Process Memory Layout**
  - Stack vs Heap vs Data vs BSS vs Text Segments.
  - Stack frame lifecycle, stack pointer (`RSP`), base pointer (`RBP`), call-stack mechanics.
- [ ] **2.2 Pointer Internals & Pointer Arithmetic**
  - Memory addresses as raw byte offsets.
  - Pointer arithmetic based on type sizing (`ptr + 1` scale factor).
  - Pointers to Pointers (`T**`), Void Pointers (`void*`), and Generic Programming.
  - Function Pointers: Syntax, callbacks, jump tables (V-tables in C).
- [ ] **2.3 Type Qualifiers & Contract Modifiers**
  - `const` (Data constant vs Pointer constant vs Both).
  - `volatile` (Preventing compiler optimization for hardware registers/signals).
  - `restrict` (Aliasing optimization hints for the compiler).
  - `static` (Internal linkage vs function variable lifecycle) & `extern`.

---

### 📐 Module 3: Data Structures, Alignment & Padding Internals
- [ ] **3.1 Structure Padding, Packing & Alignment**
  - CPU word alignment requirements (32-bit vs 64-bit alignment).
  - Structure packing (`#pragma pack(1)` or `__attribute__((packed))`).
  - Offsets calculation using `offsetof()` macro.
- [ ] **3.2 Advanced Struct Features**
  - Bit-fields for space-constrained protocols.
  - Unions, Anonymous Unions, and Tagged Unions (Variant types).
  - Flexible Array Members (FAM) at structure tail.
- [ ] **3.3 Opaque Pointers & Encapsulation**
  - Hiding implementation details in `.c` files using opaque handle pointers (OOP in C).

---

### 💾 Module 4: Dynamic Memory Allocation & Custom Memory Managers
- [ ] **4.1 Standard Heap Allocations**
  - `malloc()`, `calloc()`, `realloc()`, and `free()` internals.
  - Memory leaks, Use-After-Free (UAF), Double Free, and Dangling Pointers.
  - Heap inspection using **Valgrind** (`memcheck`, `massif`).
- [ ] **4.2 Low-Level OS Memory Requests**
  - Kernel memory allocation mechanisms: `brk`/`sbrk` and `mmap`/`munmap`.
  - Memory fragmentation (Internal vs External).
- [ ] **4.3 Building Custom Memory Allocators**
  - Writing a Custom Arena / Linear Allocator.
  - Writing a Fixed-size Free-List / Pool Allocator.

---

### ⚙️ Module 5: Preprocessor Metaprogramming & Macros
- [ ] **5.1 Macro Expansion Rules & Traps**
  - Function-like macros vs Inline functions.
  - Operator precedence bugs & `do { ... } while(0)` wrapping idiom.
- [ ] **5.2 Advanced Macro Techniques**
  - Stringification (`#`) and Token Pasting (`##`).
  - Variadic Macros (`__VA_ARGS__`).
  - X-Macros technique for automated code generation (Enums to Strings mapping).

---

### 🖥️ Module 6: POSIX Systems Programming & Low-Level I/O
- [ ] **6.1 Low-Level File I/O vs Standard I/O**
  - Buffered Stream I/O (`fopen`, `fread`, `fwrite`) vs Unbuffered POSIX System Calls (`open`, `read`, `write`, `close`).
  - File Descriptors, Duplication (`dup2`), and File Position Offsets (`lseek`).
- [ ] **6.2 Memory-Mapped Files & Shared Memory**
  - Mapping files directly into memory with `mmap()`.
  - Copy-On-Write (COW) mechanics and Inter-Process Communication (IPC).
- [ ] **6.3 Process Management & Signals**
  - Process creation (`fork()`), Execution (`execve()`), and Reaping (`waitpid()`).
  - Signals (`signal()`, `sigaction()`), async-signal-safe functions, `setjmp()` / `longjmp()`.

---

### 🧵 Module 7: Concurrency, Multithreading & Atomics
- [ ] **7.1 POSIX Threads (`pthreads`)**
  - Thread creation (`pthread_create`), joining (`pthread_join`), and detachment.
  - Thread Race Conditions and Critical Sections.
- [ ] **7.2 Synchronization Primitives**
  - Mutexes (`pthread_mutex_t`), Condition Variables (`pthread_cond_t`), and Read-Write Locks.
  - Deadlocks, livelocks, priority inversion, and prevention strategies.
- [ ] **7.3 Low-Level Atomics & Memory Barriers (C11)**
  - Lock-free programming with `<stdatomic.h>`.
  - Memory Ordering models (Sequential Consistency, Acquire-Release semantics).

---

### 🌐 Module 8: Network Socket Programming
- [ ] **8.1 Socket Abstractions**
  - TCP vs UDP Sockets (`socket()`, `bind()`, `listen()`, `accept()`, `connect()`).
  - Address structures (`struct sockaddr_in`, `in_addr`).
- [ ] **8.2 High-Performance I/O Multiplexing**
  - Blocking vs Non-Blocking Sockets.
  - Event-driven I/O loop: `select()`, `poll()`, and `epoll()` (Linux edge-triggered vs level-triggered).

---

### 🏎️ Module 9: Performance Optimization, Hardware & Security
- [ ] **9.1 CPU Cache Locality & Hardware Considerations**
  - L1/L2/L3 Cache Lines (64-byte alignment), Cache Misses vs Cache Hits.
  - Row-Major array traversal vs Column-Major traversal performance.
  - SIMD Vectorization concepts and GCC `__attribute__((aligned(32)))`.
- [ ] **9.2 Security Vulnerabilities & Exploit Defense**
  - Buffer Overflow exploits (Stack smashing) & Format String Vulnerabilities.
  - Defense mechanisms: Stack Canaries (`-fstack-protector`), ASLR, NX Bit, Data Execution Prevention (DEP).
  - Static Code Analysis (`cppcheck`, `clang-tidy`).

---

## 🏛️ Real-World Capstone Projects
1. **MyShell:** A custom Unix shell supporting pipes (`|`), I/O redirection (`>`, `<`), and background job control.
2. **Custom Malloc:** A thread-safe dynamic memory allocator using `sbrk`/`mmap` with segregated free lists.
3. **Event HTTP Server:** A high-concurrency event-driven web server built on top of `epoll` and non-blocking sockets.

---

Developed with 💻 for Systems Engineering & Computer Science Mastery.