inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 28, 3 }));
  set_short( "Hallway - x45y28z3" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y29z3.c",
  "south" : DIR+"/rooms/x45y27z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
