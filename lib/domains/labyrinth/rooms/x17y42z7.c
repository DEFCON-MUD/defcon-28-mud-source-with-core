inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 42, 7 }));
  set_short( "Passage - x17y42z7" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y42z7.c",
  "south" : DIR+"/rooms/x17y41z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
