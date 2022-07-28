inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 5, 4 }));
  set_short( "Passage - x51y5z4" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y6z4.c",
  "south" : DIR+"/rooms/x51y4z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
