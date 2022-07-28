inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 13, 9 }));
  set_short( "Hallway - x17y13z9" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y14z9.c",
  "south" : DIR+"/rooms/x17y12z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
