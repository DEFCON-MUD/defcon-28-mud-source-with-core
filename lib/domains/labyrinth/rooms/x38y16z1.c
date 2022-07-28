inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 16, 1 }));
  set_short( "Corridor - x38y16z1" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y16z1.c",
  "east" : DIR+"/rooms/x39y16z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
