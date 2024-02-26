inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 38, 2 }));
  set_short( "Corridor - x9y38z2" );
set_objects( DIR+"/monsters/goon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y39z2.c",
  "south" : DIR+"/rooms/x9y37z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
