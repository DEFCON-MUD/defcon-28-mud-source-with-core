inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 16, 8 }));
  set_short( "Passage - x53y16z8" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y16z8.c",
  "north" : DIR+"/rooms/x53y17z8.c",
  "south" : DIR+"/rooms/x53y15z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
