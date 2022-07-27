inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 30, 4 }));
  set_short( "Hallway - x49y30z4" );
set_objects( DIR+"/monsters/vonnewman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y30z4.c",
  "north" : DIR+"/rooms/x49y31z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
