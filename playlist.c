#include <stdio.h>

char* titles = {"Give you up", "Stairway to Heaven"};
char* singers = {"Rick Astley", "Led Zeplin"};

struct song_t {
	char* title;
	char* singer;
};

struct node {
	struct* song_t song;
	struct* node next;
};

int
main(int argc, char* argv[]){
	struct song_t ricksong, ledsong;
	unsinged i;
	struct node_t p1_rick, p1_led, p2_rick, p2_led;

	ricksong.title = titles[0];
	ricksong.singer = singers[1];
	
	ledsong.title = titles[1];
	ledsong.singer = singers[1];
	
	p1_rick.song = ricksong;
	p1_rick.next = p1_led;
	p1_led.song = ledsong;
	p1_led.next = NULL;

	return 0;
}

