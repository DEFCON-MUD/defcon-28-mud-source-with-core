inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 10, 7 }));
  set_short( "Corridor - x37y10z7" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y10z7.c",
  "east" : DIR+"/rooms/x38y10z7.c",
  "south" : DIR+"/rooms/x37y9z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
