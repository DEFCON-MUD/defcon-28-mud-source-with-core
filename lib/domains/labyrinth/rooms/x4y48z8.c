inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 48, 8 }));
  set_short( "Corridor - x4y48z8" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y48z8.c",
  "east" : DIR+"/rooms/x5y48z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
