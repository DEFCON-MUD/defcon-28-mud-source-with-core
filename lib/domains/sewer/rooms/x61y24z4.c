inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 24, 4 }));
  set_short( "Hallway - x61y24z4" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y25z4.c",
  "south" : DIR+"/rooms/x61y23z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
