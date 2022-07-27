inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 47, 2 }));
  set_short( "Hallway - x57y47z2" );
set_objects( DIR+"/monsters/tinyweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y48z2.c",
  "south" : DIR+"/rooms/x57y46z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
