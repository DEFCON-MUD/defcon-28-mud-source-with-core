inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 56, 0 }));
  set_short( "Passage - x46y56z0" );
set_objects( DIR+"/monsters/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y56z0.c",
  "east" : DIR+"/rooms/x47y56z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
