inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 64, 8 }));
  set_short( "Hallway - x46y64z8" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y64z8.c",
  "east" : DIR+"/rooms/x47y64z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
