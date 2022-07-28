inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 49, 1 }));
  set_short( "Corridor - x7y49z1" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y50z1.c",
  "south" : DIR+"/rooms/x7y48z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
