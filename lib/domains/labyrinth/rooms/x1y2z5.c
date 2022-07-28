inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 2, 5 }));
  set_short( "Hallway - x1y2z5" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y2z5.c",
  "north" : DIR+"/rooms/x1y3z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crappy sales material in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
