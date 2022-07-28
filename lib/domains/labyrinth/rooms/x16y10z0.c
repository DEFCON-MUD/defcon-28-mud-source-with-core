inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 10, 0 }));
  set_short( "Corridor - x16y10z0" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y10z0.c",
  "east" : DIR+"/rooms/x17y10z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
