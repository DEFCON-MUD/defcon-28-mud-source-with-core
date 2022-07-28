inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 64, 8 }));
  set_short( "Passage - x13y64z8" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y64z8.c",
  "east" : DIR+"/rooms/x14y64z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
