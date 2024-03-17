# Hệ thống nhúng
    là một hệ thống tự trị được nhúng vào một hệ thống mẹ, được tích hợp cả phần cứng và phần mềm để phục vụ bài toán chuyên dụng nào đó và chỉ thực hiện một chức năng nhất định.
## Hệ điều hành nhúng
    là hệ điều hành dành cho các hệ thống nhúng.
### Hệ điều hành nhúng thời gian thực
    là phần mềm điều khiển chuyên dụng, đáp ứng điều khiển hệ thống phải đủ nhanh trong môi trường của nó.


# CÁC THÀNH PHẦN CƠ BẢN CỦA RTOS    
    - Scheduler: xác định thứ tự thực hiện các tác vụ hay luồng, cơ chế lập lịch này như queue, các tác vụ được thêm vào và được phân bổ thứ tự thực hiện bằng độ ưu tiên, thứ tự đến trước hay sau... Một số thuật toán lập lịch:
      - Round-Robin: mỗi tác vụ sẽ được CPU phân một thời gian thực thi (`time-slice`), sau khi hết thời gian này tác vụ phải nhường lại CPU cho task khác.
      - Preemptive: task quan trong sẽ được thực thi trước dựa vào mức độ ưu tiên mà nó được gán.
      - Cooperative: các task sẽ đợi task trước thực thi xong thì thực thi, task có quyền ưu tiên cao hơn vẫn đợi task có quyền thấp hơn thực thi xong
    - User-defined data, objects and classes: các đối tượng, lớp dữ liệu cho người dùng tự định nghĩa.
    - Memory management: phân bổ bộ nhớ cho các chương trình được chạy hoặc đối tượng được tham chiếu trong bộ nhớ.
    - Realtime kernel: kernel cung câp một số dịch vụ: 
      - Task Management
      - Task Synchronization & intertask communication
      - Timer management
      - Device I/O management
      - Memory management
      - Interrupt and Event Handling