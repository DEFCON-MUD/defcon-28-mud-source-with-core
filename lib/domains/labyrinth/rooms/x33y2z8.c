inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 2, 8 }));
  set_short( "Corridor - x33y2z8" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y2z8.c",
  "north" : DIR+"/rooms/x33y3z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crappy sales material in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
