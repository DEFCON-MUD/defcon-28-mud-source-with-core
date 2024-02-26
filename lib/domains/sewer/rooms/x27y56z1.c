inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 56, 1 }));
  set_short( "Corridor - x27y56z1" );
set_objects( DIR+"/monsters/koreth.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y56z1.c",
  "north" : DIR+"/rooms/x27y57z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
