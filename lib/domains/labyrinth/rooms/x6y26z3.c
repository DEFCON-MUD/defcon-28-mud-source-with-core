inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 26, 3 }));
  set_short( "Corridor - x6y26z3" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y26z3.c",
  "east" : DIR+"/rooms/x7y26z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
