inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 64, 2 }));
  set_short( "Hallway - x46y64z2" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y64z2.c",
  "east" : DIR+"/rooms/x47y64z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
