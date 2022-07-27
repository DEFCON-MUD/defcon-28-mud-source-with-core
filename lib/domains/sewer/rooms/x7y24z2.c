inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 24, 2 }));
  set_short( "Passage - x7y24z2" );
set_objects( DIR+"/monsters/radgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y24z2.c",
  "north" : DIR+"/rooms/x7y25z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
