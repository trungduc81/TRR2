Dưới đây là nội dung của bạn đã được chuyển thành markdown:

```markdown
# Tìm kiếm theo chiều sâu - DFS

- **Tư tưởng**  
  - Trong quá trình tìm kiếm, ưu tiên “chiều sâu” hơn “chiều rộng”.  
  - Đi xuống sâu nhất có thể trước khi quay lại.  

---

## Thuật toán

**DFS(u)**  
```plaintext
{ 
  // u là đỉnh bắt đầu duyệt  
  <Thăm đỉnh u>; // duyệt đỉnh u  
  chuaxet[u] = false; // xác nhận đỉnh u đã duyệt  
  for (v ∈ Ke(u)) {  
    if (chuaxet[v]) { // nếu v chưa được duyệt  
      DFS(v); // duyệt theo chiều sâu từ v  
    }  
  }  
}
```

---

# DFS sử dụng ngăn xếp

**DFS(u)**  

**Bước 1: Khởi tạo**  
```plaintext
stack = ∅; // khởi tạo stack là rỗng  
push(stack, u); // đưa đỉnh u vào ngăn xếp  
<Thăm đỉnh u>; // duyệt đỉnh u  
chuaxet[u] = false; // xác nhận đỉnh u đã duyệt  
```

**Bước 2: Lặp**  
```plaintext
while (stack ≠ ∅) {  
  s = pop(stack); // lấy đỉnh ở đầu ngăn xếp  
  for (t ∈ Ke(s)) {  
    if (chuaxet[t]) { // nếu t chưa được duyệt  
      <Thăm đỉnh t>; // duyệt đỉnh t  
      chuaxet[t] = false; // t đã duyệt  
      push(stack, s); // đưa s vào ngăn xếp  
      push(stack, t); // đưa t vào ngăn xếp  
      break; // chỉ lấy một đỉnh t  
    }  
  }  
}  
```

**Bước 3: Trả lại kết quả**  
```plaintext
return <tập đỉnh đã duyệt>;  
```
```

