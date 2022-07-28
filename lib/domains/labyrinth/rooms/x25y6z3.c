inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 6, 3 }));
  set_short( "Hallway - x25y6z3" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y7z3.c",
  "south" : DIR+"/rooms/x25y5z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
