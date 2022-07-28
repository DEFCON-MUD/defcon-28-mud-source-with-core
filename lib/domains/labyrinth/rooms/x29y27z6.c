inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 27, 6 }));
  set_short( "Corridor - x29y27z6" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y28z6.c",
  "south" : DIR+"/rooms/x29y26z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
