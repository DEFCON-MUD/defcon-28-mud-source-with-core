inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 44, 4 }));
  set_short( "Passage - x5y44z4" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y44z4.c",
  "east" : DIR+"/rooms/x6y44z4.c",
  "south" : DIR+"/rooms/x5y43z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
