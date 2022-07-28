inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 32, 4 }));
  set_short( "Hallway - x25y32z4" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y32z4.c",
  "south" : DIR+"/rooms/x25y31z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
