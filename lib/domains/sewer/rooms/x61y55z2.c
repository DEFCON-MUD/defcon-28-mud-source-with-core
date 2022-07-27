inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 55, 2 }));
  set_short( "Corridor - x61y55z2" );
set_objects( DIR+"/monsters/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y56z2.c",
  "south" : DIR+"/rooms/x61y54z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
