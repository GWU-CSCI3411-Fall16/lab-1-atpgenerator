#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

char* titles = {"Give you up", "Stairway to Heaven"};
char* singers = {"Rick Astley", "Led Zeplin"};

typedef int (*compare_f)(void*, void*);

struct song_t {
	char* title;
	char* singer;
};

int
are_two_songs_same(void* song1, void* song2) {
	struct song_t* s1 = (struct song_t*) song1;
	struct song_t* s2 = (struct song_t*) song2;
	if (strcmp(s1->title, s2->title)) return 0;
	if (strcmp(s1->artist, s2->artist)) return 0;
	return 1;
}

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

struct playlist_t* 
pl_create(void) {
	struct playlist_t* pl;
	pl = (struct playlist_t*) malloc(sizeof(struct playlist_t));
	if (pl = NULL) return NULL;
	pl->head = NULL;
	return pl
}

void
pl_destroy(struct playlist_t* pl) {
	assert(pl != NULL);
	assert(pl->head != NULL);
	free(pl);
}

void 
pl_add(struct playlist_t* pl, void* data) {
	struct node_t* ptr;
	struct node_t* node;

	assert(pl != NULL);
	node = node_create(data);
	assert(node != NULL);

	if (pl->head == NULL) {
		pl->head = node;
	}
	else {
		ptr = pl->head;
		while (ptr != NULL) {
			ptr = ptr->next;
		}
		ptr->next = node;
	}
}

struct node_t* 
node_create(void* data) {
	struct node_t* node;
	node = (struct node_t*) malloc(sizeof(struct node_t));
	if(node == NULL) return NULL;
	node->song = data;
	node->next = NULL;
	return node;
}



void*
pl_remove_first(struct playlist_t* pl) {
	void* data;
	struct node_t* head;

	assert(pl != NULL);
	head = pl->head;
	if (head == NULL) return NULL;
	data = head->song;
	node_destroy(head);
	return data;e
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
	struct song_t song1, song2;
	struct node_t *node1, *node2;

	song1.title = titles[0];
	song1.singer = singers[1];

	song2.title = titles[0];
	song2.singer = singers[1];	

	pl_add(pl, &song1);
	pl_add(pl, &song2);
	
	print_playlist(&node1);

	return 0;
}

