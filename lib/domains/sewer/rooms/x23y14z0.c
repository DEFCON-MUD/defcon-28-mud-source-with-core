inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 14, 0 }));
  set_short( "Passage - x23y14z0" );
set_objects( DIR+"/monsters/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y15z0.c",
  "south" : DIR+"/rooms/x23y13z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
