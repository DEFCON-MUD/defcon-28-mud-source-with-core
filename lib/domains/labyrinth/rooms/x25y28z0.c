inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 28, 0 }));
  set_short( "Passage - x25y28z0" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y28z0.c",
  "north" : DIR+"/rooms/x25y29z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
