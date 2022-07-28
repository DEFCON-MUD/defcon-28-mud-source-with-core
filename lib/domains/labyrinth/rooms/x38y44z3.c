inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 44, 3 }));
  set_short( "Passage - x38y44z3" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y44z3.c",
  "east" : DIR+"/rooms/x39y44z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the glorzo in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
