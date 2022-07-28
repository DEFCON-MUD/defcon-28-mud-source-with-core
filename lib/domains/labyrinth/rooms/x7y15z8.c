inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 15, 8 }));
  set_short( "Corridor - x7y15z8" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y16z8.c",
  "south" : DIR+"/rooms/x7y14z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
