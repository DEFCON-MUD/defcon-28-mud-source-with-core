inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 56, 6 }));
  set_short( "Corridor - x3y56z6" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y56z6.c",
  "east" : DIR+"/rooms/x4y56z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
