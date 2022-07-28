inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 30, 0 }));
  set_short( "Corridor - x45y30z0" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y30z0.c",
  "south" : DIR+"/rooms/x45y29z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
