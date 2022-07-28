inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 27, 8 }));
  set_short( "Passage - x27y27z8" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y28z8.c",
  "south" : DIR+"/rooms/x27y26z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
