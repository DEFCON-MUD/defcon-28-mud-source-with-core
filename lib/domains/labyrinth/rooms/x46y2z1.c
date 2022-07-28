inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 2, 1 }));
  set_short( "Hallway - x46y2z1" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y2z1.c",
  "east" : DIR+"/rooms/x47y2z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
