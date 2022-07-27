inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 14, 4 }));
  set_short( "Corridor - x41y14z4" );
set_objects( DIR+"/monsters/andy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y14z4.c",
  "south" : DIR+"/rooms/x41y13z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crappy sales material in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
