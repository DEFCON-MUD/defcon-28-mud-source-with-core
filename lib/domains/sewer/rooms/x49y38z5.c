inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 38, 5 }));
  set_short( "Corridor - x49y38z5" );
set_objects( DIR+"/monsters/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y38z5.c",
  "north" : DIR+"/rooms/x49y39z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
