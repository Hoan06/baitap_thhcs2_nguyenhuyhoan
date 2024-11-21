#include <stdio.h>
#include <string.h>




struct ThiSinh {
    int ma;
    char ten[50];
    char ngaySinh[20];
    float diem1, diem2, diem3;
};




int main() {
    int n, i;
    float maxDiem = 0;
    struct ThiSinh thiSinh[100];

    printf("Nhap so luong thi sinh: ");
    scanf("%d", &n);

    // nhap thong tin thi sinh
    for (i = 0; i < n; i++) {
        thiSinh[i].ma = i + 1;
        printf("Nhap ten thi sinh thu %d: ", i + 1);
        scanf("%s", thiSinh[i].ten);
        printf("Nhap ngay sinh thi sinh thu %d: ", i + 1);
        scanf("%s", thiSinh[i].ngaySinh);

        // Nh?p di?m cho t?ng môn
        printf("Nhap diem mon 1: ");
        scanf("%f", &thiSinh[i].diem1);
        printf("Nhap diem mon 2: ");
        scanf("%f", &thiSinh[i].diem2);
        printf("Nhap diem mon 3: ");
        scanf("%f", &thiSinh[i].diem3);

        // tinh tong diem va cap nhat diem cao nhat
        float tongDiem = thiSinh[i].diem1 + thiSinh[i].diem2 + thiSinh[i].diem3;
        if (tongDiem > maxDiem) {
            maxDiem = tongDiem;
        }
    }

    // in ra thu khoa
    printf("\nDanh sach thu khoa:\n");
    for (i = 0; i < n; i++) {
        float tongDiem = thiSinh[i].diem1 + thiSinh[i].diem2 + thiSinh[i].diem3;
        if (tongDiem == maxDiem) {
            printf("Ma: %d\tTen: %s\tNgay sinh: %s\tTong diem: %.2f\n",
                   thiSinh[i].ma, thiSinh[i].ten, thiSinh[i].ngaySinh, tongDiem);
        }
    }






    return 0;
}
