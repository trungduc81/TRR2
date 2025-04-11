
# 📘 Lý thuyết về Chu trình Euler & Đường đi Euler

## 1. 📌 Định nghĩa

- **Chu trình Euler**:  
  Là **chu trình đơn** trong đồ thị G, đi qua **tất cả các cạnh** của đồ thị đúng một lần.

- **Đường đi Euler**:  
  Là **đường đi đơn** trong đồ thị G, đi qua **tất cả các cạnh** đúng một lần (không cần quay lại điểm đầu).

- **Đồ thị Euler**:  
  Là đồ thị **có tồn tại chu trình Euler**.

- **Đồ thị nửa Euler**:  
  Là đồ thị **có tồn tại đường đi Euler**, nhưng **không có chu trình Euler**.

---

## 2. 📌 Điều kiện cần và đủ để đồ thị là Euler

### 🟦 Với đồ thị **vô hướng**:

Đồ thị vô hướng liên thông \( G = (V, E) \) là **Euler** **khi và chỉ khi**:
- **Mọi đỉnh của G đều có bậc chẵn** (số cạnh nối đến mỗi đỉnh là số chẵn)

> 💡 **Ý nghĩa**: Đồ thị phải liên thông và không có đỉnh nào có bậc lẻ.

---

### 🟩 Với đồ thị **có hướng**:

Đồ thị có hướng liên thông yếu \( G = (V, E) \) là **Euler** **khi và chỉ khi**:
- **Tất cả các đỉnh** đều có:
  - **Bán bậc ra** (số cung đi ra) **= Bán bậc vào** (số cung đi vào)

> ✅ Khi điều kiện này thỏa mãn, đồ thị có hướng sẽ trở thành **liên thông mạnh**.

---

# 🧠 Chứng minh đồ thị là Euler

## 🔷 Với đồ thị **vô hướng**

### 1. ✅ Kiểm tra **tính liên thông** của đồ thị
- Sử dụng thuật toán **DFS(u)** hoặc **BFS(u)** để duyệt từ một đỉnh `u`.
- Nếu **tất cả các đỉnh được duyệt** (tức là số đỉnh duyệt được = |V|), thì đồ thị **liên thông**.

### 2. ✅ Kiểm tra **bậc của các đỉnh**
- Tất cả các đỉnh trong đồ thị phải có **bậc là số chẵn**.

#### 💡 Với ma trận kề:
- Bậc của đỉnh `u` = **Tổng các phần tử của hàng `u`** (hoặc cột `u`, vì ma trận kề của đồ thị vô hướng là đối xứng).

---

## 🔶 Với đồ thị **có hướng**

### 1. ✅ Kiểm tra **tính liên thông yếu**
- Chuyển đồ thị có hướng thành đồ thị vô hướng tương ứng, rồi kiểm tra liên thông như trên, hoặc:
- Duyệt từ một đỉnh `u ∈ V` bằng **DFS(u)** hoặc **BFS(u)**, nếu duyệt được toàn bộ đồ thị ⇒ liên thông yếu.

### 2. ✅ Kiểm tra **bán bậc ra và bán bậc vào** của các đỉnh
- Mỗi đỉnh `u` phải thỏa mãn:  
  **Bán bậc ra = Bán bậc vào**

#### 💡 Với ma trận kề:
- Bán bậc ra (`out`) của đỉnh `u` = **Tổng các số `1` trong hàng `u`**  
- Bán bậc vào (`in`) của đỉnh `u` = **Tổng các số `1` trong cột `u`**

✍️ *Ghi chú thêm*:  
- Nếu đồ thị không liên thông hoặc có đỉnh bậc lẻ (vô hướng), hoặc bán bậc vào ≠ bán bậc ra (hướng), thì **không phải là đồ thị Euler**.

---

# 🔍 Điều kiện cần và đủ để đồ thị là **nửa Euler**

## 🔷 Với đồ thị **vô hướng**

**Đồ thị vô hướng liên thông** \( G = \langle V, E 
angle \) là **nửa Euler** khi và chỉ khi:

- \( G \) có **0 hoặc 2 đỉnh bậc lẻ**:
  - Nếu có **2 đỉnh bậc lẻ**:  
    → Đường đi Euler **bắt đầu từ một đỉnh bậc lẻ** và **kết thúc tại đỉnh bậc lẻ còn lại**.
  - Nếu có **0 đỉnh bậc lẻ**:  
    → \( G \) là **đồ thị Euler** (tồn tại chu trình Euler).

### 🧪 Chứng minh đồ thị vô hướng là nửa Euler

1. ✅ **Kiểm tra tính liên thông**:
   - Sử dụng thuật toán **DFS(u)** hoặc **BFS(u)**.
   - Nếu duyệt được toàn bộ đồ thị từ một đỉnh `u` ⇒ liên thông.

2. ✅ **Kiểm tra số đỉnh bậc lẻ**:
   - Dùng **ma trận kề** hoặc **danh sách kề** để tính **bậc của từng đỉnh**.
   - Đếm số đỉnh bậc lẻ và kiểm tra xem có đúng **0 hoặc 2** đỉnh.

---

## 🔶 Với đồ thị **có hướng**

**Đồ thị có hướng liên thông yếu** \( G = \langle V, E 
angle \) là **nửa Euler** khi và chỉ khi:

- Có **hai đỉnh** `u` và `v` sao cho:
  - `out(u) - in(u) = 1`
  - `in(v) - out(v) = 1`

- Các đỉnh còn lại `s ≠ u, v` thỏa mãn:
  - `in(s) = out(s)`

➡️ Khi đó, đường đi Euler **bắt đầu từ đỉnh** `u` và **kết thúc tại đỉnh** `v`.

### 🧪 Chứng minh đồ thị có hướng là nửa Euler

1. ✅ **Kiểm tra tính liên thông yếu**:
   - Duyệt đồ thị bằng **DFS(u)** hoặc **BFS(u)**.
   - Nếu duyệt được tất cả đỉnh (sau khi bỏ hướng các cạnh) ⇒ liên thông yếu.

2. ✅ **Kiểm tra điều kiện bán bậc**:
   - Tính:
     - `out(u)`: số cung đi ra từ `u`
     - `in(u)`: số cung đi vào `u`
   - Tìm đúng **hai đỉnh** sao cho:
     - `out(u) - in(u) = 1`
     - `out(v) - in(v) = -1`
   - Các đỉnh còn lại: `in = out`

✍️ *Ghi chú thêm*:  
- Nếu không thỏa mãn các điều kiện trên thì đồ thị **không có đường đi Euler**, tức **không phải nửa Euler**.
