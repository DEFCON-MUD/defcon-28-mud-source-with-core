inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 55, 5 }));
  set_short( "Hallway - x7y55z5" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y56z5.c",
  "south" : DIR+"/rooms/x7y54z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
