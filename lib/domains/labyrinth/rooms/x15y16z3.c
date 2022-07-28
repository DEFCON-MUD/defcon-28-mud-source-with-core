inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 16, 3 }));
  set_short( "Hallway - x15y16z3" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y16z3.c",
  "south" : DIR+"/rooms/x15y15z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
