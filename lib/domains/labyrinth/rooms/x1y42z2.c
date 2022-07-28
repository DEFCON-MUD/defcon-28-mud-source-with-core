inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 42, 2 }));
  set_short( "Hallway - x1y42z2" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y42z2.c",
  "north" : DIR+"/rooms/x1y43z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
