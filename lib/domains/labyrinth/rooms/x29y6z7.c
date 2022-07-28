inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 6, 7 }));
  set_short( "Passage - x29y6z7" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y6z7.c",
  "east" : DIR+"/rooms/x30y6z7.c",
  "south" : DIR+"/rooms/x29y5z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
