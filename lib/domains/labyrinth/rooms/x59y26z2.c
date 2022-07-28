inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 26, 2 }));
  set_short( "Corridor - x59y26z2" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y26z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east.%^RESET%^");
}
