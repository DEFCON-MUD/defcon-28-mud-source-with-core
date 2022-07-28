inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 6, 3 }));
  set_short( "Passage - x61y6z3" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y7z3.c",
  "south" : DIR+"/rooms/x61y5z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
