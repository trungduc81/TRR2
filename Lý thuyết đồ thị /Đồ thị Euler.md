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

✍️ *Ghi chú*:  
- Chu trình Euler là một dạng **tổng quát** hơn đường đi Euler vì nó bắt đầu và kết thúc cùng một đỉnh.  
- Tất cả các chu trình Euler đều là đường đi Euler, nhưng không phải đường đi Euler nào cũng là chu trình.

---

