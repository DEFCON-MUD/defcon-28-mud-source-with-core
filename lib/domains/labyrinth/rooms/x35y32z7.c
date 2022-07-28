inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 32, 7 }));
  set_short( "Corridor - x35y32z7" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y32z7.c",
  "north" : DIR+"/rooms/x35y33z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crappy sales material in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
