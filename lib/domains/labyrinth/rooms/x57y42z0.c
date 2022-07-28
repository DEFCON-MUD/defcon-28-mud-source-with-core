inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 42, 0 }));
  set_short( "Corridor - x57y42z0" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y42z0.c",
  "east" : DIR+"/rooms/x58y42z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
