inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 54, 8 }));
  set_short( "Hallway - x39y54z8" );
set_objects( DIR+"/monsters/prisonfreddie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y54z8.c",
  "north" : DIR+"/rooms/x39y55z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
