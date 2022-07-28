inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 32, 2 }));
  set_short( "Hallway - x14y32z2" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y32z2.c",
  "east" : DIR+"/rooms/x15y32z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
