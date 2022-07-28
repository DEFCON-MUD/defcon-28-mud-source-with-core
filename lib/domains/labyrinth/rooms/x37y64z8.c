inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 64, 8 }));
  set_short( "Passage - x37y64z8" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y64z8.c",
  "east" : DIR+"/rooms/x38y64z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
