inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 42, 3 }));
  set_short( "Corridor - x59y42z3" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y42z3.c",
  "north" : DIR+"/rooms/x59y43z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
