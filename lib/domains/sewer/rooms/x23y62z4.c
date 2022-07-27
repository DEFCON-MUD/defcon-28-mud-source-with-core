inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 62, 4 }));
  set_short( "Corridor - x23y62z4" );
set_objects( DIR+"/monsters/eastfilinlerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y62z4.c",
  "south" : DIR+"/rooms/x23y61z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crappy sales material in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
