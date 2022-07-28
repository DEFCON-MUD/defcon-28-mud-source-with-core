inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 20, 9 }));
  set_short( "Corridor - x9y20z9" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y20z9.c",
  "east" : DIR+"/rooms/x10y20z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
