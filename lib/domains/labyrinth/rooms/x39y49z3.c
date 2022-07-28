inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 49, 3 }));
  set_short( "Corridor - x39y49z3" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y50z3.c",
  "south" : DIR+"/rooms/x39y48z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
