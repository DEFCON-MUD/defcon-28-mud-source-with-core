inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 24, 4 }));
  set_short( "Passage - x9y24z4" );
set_objects( DIR+"/monsters/carrierpigeon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y24z4.c",
  "north" : DIR+"/rooms/x9y25z4.c",
  "south" : DIR+"/rooms/x9y23z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
