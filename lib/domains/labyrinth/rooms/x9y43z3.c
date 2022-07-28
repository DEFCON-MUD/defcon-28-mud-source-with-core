inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 43, 3 }));
  set_short( "Hallway - x9y43z3" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y44z3.c",
  "south" : DIR+"/rooms/x9y42z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
