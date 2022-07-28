inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 45, 6 }));
  set_short( "Passage - x29y45z6" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y46z6.c",
  "south" : DIR+"/rooms/x29y44z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
