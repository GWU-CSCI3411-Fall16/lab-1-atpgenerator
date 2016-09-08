#include <stdio.h>
#include <assert.h>

char* titles = {"Give you up", "Stairway to Heaven"};
char* singers = {"Rick Astley", "Led Zeplin"};

struct song_t {
	char* title;
	char* singer;
};

struct node_t {
	struct* song_t song;
	struct* node_t next;
};

struct playlist_t {
	struct song_t* song;
	struct node_t* next;
};

struct playlist_t {
	struct node_t* head;
};

struct playlist_t* pl_create(void) {
	struct playlist_t* pl;
	pl = (struct playlist_t*) malloc(sizeof(struct playlist_t));
	if (pl = NULL) return NULL;
	pl->head = NULL;
	return pl
}

void
pl_destroy(struct playlist_t* pl) {
	assert(pl != NULL);
}

void
print_playlist(struct node_t* node)
{
	struct node_t* ptr;
	ptr = node;
	while(ptr != NULL){
		printf("%s by %s\n", ptr->song->title, ptr->song->singer);
		ptr = ptr->next;
	}


int
main(int argc, char* argv[])
{
	struct song_t ricksong, ledsong;
	struct node_t p1_rick, p1_led, p2_rick, p2_led;

	ricksong.title = titles[0];
	ricksong.singer = singers[1];
	
	ledsong.title = titles[1];
	ledsong.singer = singers[1];
	
	p1_rick.song = &ricksong;
	p1_rick.next = &p1_led;
	p1_led.song = &ledsong;
	p1_led.next = NULL;

	return 0;
}

