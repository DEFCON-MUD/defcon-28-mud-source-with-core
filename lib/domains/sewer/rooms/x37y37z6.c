inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 37, 6 }));
  set_short( "Corridor - x37y37z6" );
set_objects( DIR+"/monsters/heptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y38z6.c",
  "south" : DIR+"/rooms/x37y36z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
