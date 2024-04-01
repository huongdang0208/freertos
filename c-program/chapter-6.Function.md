# Cấu trúc tổng quát của chương trình
- các #include
- #define
- khai báo đối tượn dữ liệu ngoài: biến mảng struct...
- nguyên mẫu của các hàm
- định nghĩa của các hàm
- main
# Con trỏ và địa chỉ
- là một biến chứa địa chỉ (địa chỉ của biến được phân biệt bởi kiểu dữ liệu của biến nên có địa chỉ kiểu int, float...) và cũng có nhiều kiểu con trỏ tương ứng: float, double...
```c
    int x, y, *px, *py;
    px=&x;
    py=&y;
```
trong đoạn code trên px chứa địa chỉ của biến x nên px trỏ tới x
- cách dùng: ta có thể dùng tên con trỏ hoặc khai báo của con trỏ: `px` và `*px`
- nếu sử dụng tên con trỏ thì con trỏ phải được gán một giá trị địa chỉ:
```c
    float a, *pa, *pb;
    pa=&a;
    pb=pa;
```
- nếu sử dụng dạng khai báo của con trỏ: xét ví dụ đầu cách viết `x` và `px` là tương đương nhau
```c
    *py=3*x; // tương đương với
    *py=3*(*px);
```
# Hàm có đối con trỏ
- khi hàm có đối con trỏ kiểu int, double... thì tham số thực phải tương ứng là địa chỉ của các giá trị tương ứng
```c
    void swap(float *px, float *py) {
        float temp;
        temp=*px;
        *px=*py;
        *py=temp;
    }
    main() {
        float a=3.5, b=17.7;
        swap(&a, &b);
    }
```
# Con trỏ và mảng 1 chiều
- tên mảng là một hằng địa chỉ, củ thể nó là địa chỉ của phần tử đầu tiên của mảng: mảng   `a` tương đương `&a[0]`, `*(a+i)` = `a[i]`, `a+i` = `a[i]`
- nếu con trỏ `pa` trỏ tới một phần tử `a[k]` nào đó thì: `a[i]`=`*(a+i)`=`pa[i]`=`*(pa+i)`
# Mảng, con trỏ và xâu kí tự
- khi khia báo một xâu kí tự, bộ nhớ sẽ cấp một khoảng nhớ cho một mảng kiểu char đủ lớn để chứa xâu kí tự và kí tự `\0` (kết thúc xâu)
```c
    char *mess;
    mess="Hello";
```
như đã nói mảng là một hằng địa chỉ, lúc này con trỏ mess được gán giá trị là địa chỉ đầu của xâu kí tự trên