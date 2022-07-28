inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 62, 6 }));
  set_short( "Corridor - x29y62z6" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y62z6.c",
  "south" : DIR+"/rooms/x29y61z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
