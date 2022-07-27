inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 50, 5 }));
  set_short( "Corridor - x33y50z5" );
set_objects( DIR+"/monsters/rarmella.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y50z5.c",
  "north" : DIR+"/rooms/x33y51z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
