inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 20, 0 }));
  set_short( "Passage - x51y20z0" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y20z0.c",
  "south" : DIR+"/rooms/x51y19z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crappy sales material in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
