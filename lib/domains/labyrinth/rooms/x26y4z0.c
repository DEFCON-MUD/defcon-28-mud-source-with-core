inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 4, 0 }));
  set_short( "Corridor - x26y4z0" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y4z0.c",
  "east" : DIR+"/rooms/x27y4z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
