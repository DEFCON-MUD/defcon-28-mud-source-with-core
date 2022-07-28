inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 49, 8 }));
  set_short( "Corridor - x39y49z8" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y50z8.c",
  "south" : DIR+"/rooms/x39y48z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
