#include<stdio.h>
#define mapnum 3
#define W 10 //行
#define H 5 //列

typedef struct {
	int m_map[H][W];
}Map;

void SetMap(char* filename, Map* m);
void DrawMap(Map m);

	


int main(void) {
	Map mapdata;
	char* MapFileName[mapnum] = { "map0.txt","map1.txt","map2.txt" };
	int select;
	printf("マップNoを入力(0,1,2) \b");
	scanf("%d",&select);
	if (select >= 0 && select < mapnum) {
		SetMap(MapFileName[select], &mapdata);
		DrawMap(mapdata);
	}
	else {
		printf("error");
	}
	return 0;
}




void SetMap(char* filename, Map* m) {
	FILE* fp;
	char ch;
	int i, j;
	if (fp = fopen(filename, "r")) {
		for (i = 0; i < H; i++) {
			for (j = 0; j < W; j++) {
				ch = fgetc(fp);
				if (ch >= 48 && ch <= 123) {
					m->m_map[i][j] = ch - '0';


				}
			}
			fgetc(fp);


		}
	}
}

void DrawMap(Map m) {
	int i, j;
	for (i = 0; i < H;i++) {
		for (j = 0; j < W;j++) {
			if (m.m_map[i][j] == 1) {
				printf("■");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}




}


