inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 56, 5 }));
  set_short( "Hallway - x37y56z5" );
set_objects( DIR+"/monsters/professor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y56z5.c",
  "north" : DIR+"/rooms/x37y57z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
