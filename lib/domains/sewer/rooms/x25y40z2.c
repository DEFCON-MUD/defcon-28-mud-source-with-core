inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 40, 2 }));
  set_short( "Hallway - x25y40z2" );
set_objects( DIR+"/monsters/droid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y40z2.c",
  "north" : DIR+"/rooms/x25y41z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
