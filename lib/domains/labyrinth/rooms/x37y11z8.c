inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 11, 8 }));
  set_short( "Corridor - x37y11z8" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y12z8.c",
  "south" : DIR+"/rooms/x37y10z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
