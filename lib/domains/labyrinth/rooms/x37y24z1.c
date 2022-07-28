inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 24, 1 }));
  set_short( "Corridor - x37y24z1" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y24z1.c",
  "north" : DIR+"/rooms/x37y25z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
