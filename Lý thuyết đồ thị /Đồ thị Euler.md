# 📘 Lý thuyết về Chu trình Euler & Đường đi Euler

---

## 1. 🔹 Định nghĩa

- **Chu trình Euler**:  
  Là **chu trình đơn** đi qua **mọi cạnh** của đồ thị **đúng một lần**, và **bắt đầu – kết thúc tại cùng một đỉnh**.

- **Đường đi Euler**:  
  Là **đường đi đơn** đi qua **mọi cạnh đúng một lần**, nhưng **không yêu cầu quay lại điểm xuất phát**.

- **Đồ thị Euler**:  
  Là đồ thị **có tồn tại chu trình Euler**.

- **Đồ thị nửa Euler**:  
  Là đồ thị **có tồn tại đường đi Euler**, nhưng **không có chu trình Euler**.

---

## 2. 🧩 Điều kiện cần và đủ để là **Euler**

---

### 🔷 Đối với **đồ thị vô hướng**:

> **Đồ thị Euler ⇔ Đồ thị liên thông và tất cả các đỉnh đều có bậc chẵn.**

- 📌 **Liên thông**: Có thể đi từ một đỉnh bất kỳ đến mọi đỉnh còn lại.  
- 📌 **Bậc chẵn**: Tất cả đỉnh \( v \in V \) đều có \( \deg(v) \mod 2 = 0 \)

---

### 🔶 Đối với **đồ thị có hướng**:

> **Đồ thị Euler ⇔ Đồ thị liên thông yếu và mọi đỉnh đều có bán bậc vào bằng bán bậc ra.**

- 📌 **Liên thông yếu**: Bỏ hướng các cung → đồ thị vô hướng liên thông.  
- 📌 **Bán bậc ra = Bán bậc vào** với mọi đỉnh:
  \[
  \deg^+(v) = \deg^-(v), \forall v \in V
  \]

---

## 3. ✅ Cách chứng minh một đồ thị là Euler

---

### 📌 Với đồ thị **vô hướng**:

1. **Kiểm tra liên thông**:
   - Duyệt bằng **DFS** hoặc **BFS** từ một đỉnh bất kỳ.
   - Nếu duyệt được toàn bộ đỉnh → đồ thị liên thông.

2. **Kiểm tra bậc của các đỉnh**:
   - Tính bậc của mỗi đỉnh:
     - Với **ma trận kề**: Tổng các phần tử của hàng hoặc cột tương ứng.
   - Tất cả đỉnh đều phải **có bậc chẵn**.

---

### 📌 Với đồ thị **có hướng**:

1. **Kiểm tra liên thông yếu**:
   - Chuyển đồ thị có hướng thành vô hướng (bỏ chiều các cung).
   - Dùng **DFS/BFS** kiểm tra xem có duyệt hết các đỉnh không.

2. **Kiểm tra bán bậc vào/ra**:
   - Tính:
     - `deg⁺(u)` = tổng các phần tử hàng `u` (cạnh đi ra)
     - `deg⁻(u)` = tổng các phần tử cột `u` (cạnh đi vào)
   - Mỗi đỉnh phải thỏa:
     \[
     \deg^+(u) = \deg^-(u)
     \]

---

## 4. 🔍 Điều kiện cần và đủ để là **nửa Euler**

---

### 🔷 Với đồ thị **vô hướng**:

> Đồ thị vô hướng liên thông là **nửa Euler** ⇔ Có **0 hoặc 2 đỉnh bậc lẻ**.

- Nếu **0 đỉnh bậc lẻ**: là đồ thị Euler (chu trình Euler tồn tại).
- Nếu **2 đỉnh bậc lẻ**:
  - Đường đi Euler bắt đầu tại 1 đỉnh bậc lẻ và kết thúc tại đỉnh còn lại.

**Chứng minh**:
- Kiểm tra **liên thông** như trên.
- Đếm số đỉnh có bậc lẻ.

---

### 🔶 Với đồ thị **có hướng**:

> Đồ thị có hướng liên thông yếu là **nửa Euler** ⇔

- Tồn tại đúng **hai đỉnh** \( u, v \in V \) sao cho:
  \[
  \deg^+(u) - \deg^-(u) = 1, \quad \deg^-(v) - \deg^+(v) = 1
  \]
- Mọi đỉnh còn lại:  
  \[
  \deg^+(s) = \deg^-(s)
  \]

**Chứng minh**:
- Kiểm tra liên thông yếu như đã nêu.
- Tính bán bậc vào/ra từng đỉnh và kiểm tra điều kiện trên.

---

## 5. ✍️ Ghi chú tổng kết

- **Chu trình Euler** là trường hợp đặc biệt của **đường đi Euler** (vì nó quay về điểm xuất phát).
- Tất cả chu trình Euler là đường đi Euler, nhưng ngược lại thì không.
- **Không thỏa điều kiện Euler hay nửa Euler** → không tồn tại đường đi nào đi qua tất cả các cạnh đúng 1 lần.

---



