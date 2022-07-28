inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 3, 6 }));
  set_short( "Hallway - x31y3z6" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y4z6.c",
  "south" : DIR+"/rooms/x31y2z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
