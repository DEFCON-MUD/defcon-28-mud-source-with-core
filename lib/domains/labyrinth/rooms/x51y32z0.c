inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 32, 0 }));
  set_short( "Corridor - x51y32z0" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y32z0.c",
  "south" : DIR+"/rooms/x51y31z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
