inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 17, 3 }));
  set_short( "Passage - x51y17z3" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y18z3.c",
  "south" : DIR+"/rooms/x51y16z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
