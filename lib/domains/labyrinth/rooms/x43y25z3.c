inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 25, 3 }));
  set_short( "Corridor - x43y25z3" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y26z3.c",
  "south" : DIR+"/rooms/x43y24z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
