inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 63, 1 }));
  set_short( "Passage - x31y63z1" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y64z1.c",
  "south" : DIR+"/rooms/x31y62z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
