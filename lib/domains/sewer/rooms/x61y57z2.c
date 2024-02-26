inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 57, 2 }));
  set_short( "Passage - x61y57z2" );
set_objects( DIR+"/monsters/japanesebeetle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y58z2.c",
  "south" : DIR+"/rooms/x61y56z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
