#include "Client.h"

int main() {
    Forest* forest = new Forest();
    // forest->planTree(3, 4, "shan", "red", "text");
    // 在forest中种植很多棵树
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            double x = i;
            double y = j;
            // 树类型1: 红色的杉树
            forest->planTree(x, y, "杉树", "红色", "text");
            // 树类型2: 绿色的榕树
            forest->planTree(x, y, "榕树", "绿色", "text");
            // 树类型3: 白色的桦树
            forest->planTree(x, y, "桦树", "白色", "text");
        }
    }

    forest->draw();
    delete forest;
    return 0;
}