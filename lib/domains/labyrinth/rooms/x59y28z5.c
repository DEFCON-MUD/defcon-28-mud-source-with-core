inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 28, 5 }));
  set_short( "Corridor - x59y28z5" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y28z5.c",
  "east" : DIR+"/rooms/x60y28z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
