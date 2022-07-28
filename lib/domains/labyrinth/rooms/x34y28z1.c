inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 28, 1 }));
  set_short( "Hallway - x34y28z1" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y28z1.c",
  "east" : DIR+"/rooms/x35y28z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crappy sales material in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
