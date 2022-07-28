inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 14, 2 }));
  set_short( "Passage - x51y14z2" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y14z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
