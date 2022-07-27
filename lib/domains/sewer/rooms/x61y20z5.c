inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 20, 5 }));
  set_short( "Corridor - x61y20z5" );
set_objects( DIR+"/monsters/surityoffer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y21z5.c",
  "south" : DIR+"/rooms/x61y19z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
