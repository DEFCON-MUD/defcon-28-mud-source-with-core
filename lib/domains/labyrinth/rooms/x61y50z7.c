inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 50, 7 }));
  set_short( "Passage - x61y50z7" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y51z7.c",
  "south" : DIR+"/rooms/x61y49z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the radioactive waste in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
