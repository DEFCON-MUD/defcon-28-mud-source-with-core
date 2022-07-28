inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 42, 9 }));
  set_short( "Corridor - x9y42z9" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y42z9.c",
  "north" : DIR+"/rooms/x9y43z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
