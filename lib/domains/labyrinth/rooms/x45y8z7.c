inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 8, 7 }));
  set_short( "Hallway - x45y8z7" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y8z7.c",
  "south" : DIR+"/rooms/x45y7z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
