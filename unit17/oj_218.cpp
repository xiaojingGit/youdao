// 218
// 输入三个自然数N，i，j （1<=i<=N，1<=j<=N），输出在一个N*N格的棋盘中（行列均从1开始编号），
// 与格子（i，j）同行、同列、同一对角线的所有格子的位置。 如：n=4，i=2，j=3表示了棋盘中的第二行第三列的格子，
// 如下图： 当n=4，i=2，j=3时，输出的结果是： (2,1) (2,2) (2,3) (2,4) 同一行上格子的位置 (1,3) (2,3) (3,3) (4,3) 
// 同一列上格子的位置 (1,2) (2,3) (3,4) 左上到右下对角线上的格子的位置 (4,1) (3,2) (2,3) (1,4) 左下到右上对角线上的格子的位置

// 输入格式
// 一行，三个自然数N，i，j，相邻两个数之间用单个空格隔开。1 <= N <= 10。
// 输入样例
// 4 2 3

// 输出格式
// 四行：
// 第一行：从左到右输出同一行格子位置；
// 第二行：从上到下输出同一列格子位置；
// 第三行：从左上到右下输出同一对角线格子位置；
// 第四行：从左下到右上输出同一对角线格子位置。
// 其中每个格子位置用如下格式输出：(x,y)，x为行号，y为列号，采用英文标点，中间无空格。
// 相邻两个格子位置之间用单个空格隔开。
// 输出样例
// (2,1) (2,2) (2,3) (2,4)
// (1,3) (2,3) (3,3) (4,3)
// (1,2) (2,3) (3,4)
// (4,1) (3,2) (2,3) (1,4)