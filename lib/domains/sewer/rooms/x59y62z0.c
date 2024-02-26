inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 62, 0 }));
  set_short( "Corridor - x59y62z0" );
set_objects( DIR+"/monsters/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y62z0.c",
  "east" : DIR+"/rooms/x60y62z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
