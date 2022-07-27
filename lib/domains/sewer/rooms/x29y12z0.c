inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 12, 0 }));
  set_short( "Hallway - x29y12z0" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y12z0.c",
  "south" : DIR+"/rooms/x29y11z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
