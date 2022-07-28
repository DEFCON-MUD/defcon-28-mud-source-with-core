inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 50, 6 }));
  set_short( "Corridor - x49y50z6" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y50z6.c",
  "north" : DIR+"/rooms/x49y51z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
