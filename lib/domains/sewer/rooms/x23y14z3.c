inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 14, 3 }));
  set_short( "Corridor - x23y14z3" );
set_objects( DIR+"/monsters/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y14z3.c",
  "east" : DIR+"/rooms/x24y14z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
