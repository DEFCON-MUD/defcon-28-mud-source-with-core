inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 16, 5 }));
  set_short( "Corridor - x49y16z5" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y16z5.c",
  "north" : DIR+"/rooms/x49y17z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
