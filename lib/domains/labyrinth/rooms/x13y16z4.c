inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 16, 4 }));
  set_short( "Passage - x13y16z4" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y16z4.c",
  "south" : DIR+"/rooms/x13y15z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
