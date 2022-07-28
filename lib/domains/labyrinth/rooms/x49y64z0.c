inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 64, 0 }));
  set_short( "Corridor - x49y64z0" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y64z0.c",
  "east" : DIR+"/rooms/x50y64z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
