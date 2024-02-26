inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 39, 0 }));
  set_short( "Passage - x39y39z0" );
set_objects( DIR+"/monsters/jenny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y40z0.c",
  "south" : DIR+"/rooms/x39y38z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
