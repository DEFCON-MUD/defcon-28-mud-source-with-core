inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 54, 2 }));
  set_short( "Corridor - x59y54z2" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y54z2.c",
  "south" : DIR+"/rooms/x59y53z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crappy sales material in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
