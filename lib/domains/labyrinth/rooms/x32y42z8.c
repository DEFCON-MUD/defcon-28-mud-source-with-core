inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 42, 8 }));
  set_short( "Hallway - x32y42z8" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y42z8.c",
  "east" : DIR+"/rooms/x33y42z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
