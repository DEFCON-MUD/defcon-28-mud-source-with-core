inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 24, 2 }));
  set_short( "Passage - x19y24z2" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y24z2.c",
  "north" : DIR+"/rooms/x19y25z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
