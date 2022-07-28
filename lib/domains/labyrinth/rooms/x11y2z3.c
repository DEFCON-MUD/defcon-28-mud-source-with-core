inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 2, 3 }));
  set_short( "Hallway - x11y2z3" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y2z3.c",
  "north" : DIR+"/rooms/x11y3z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
