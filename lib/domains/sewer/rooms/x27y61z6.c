inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 61, 6 }));
  set_short( "Passage - x27y61z6" );
set_objects( DIR+"/monsters/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y62z6.c",
  "south" : DIR+"/rooms/x27y60z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
