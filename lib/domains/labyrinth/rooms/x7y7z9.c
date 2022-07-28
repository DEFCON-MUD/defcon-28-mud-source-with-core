inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 7, 9 }));
  set_short( "Hallway - x7y7z9" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y8z9.c",
  "south" : DIR+"/rooms/x7y6z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
