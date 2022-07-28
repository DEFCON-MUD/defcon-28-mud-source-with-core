inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 20, 0 }));
  set_short( "Passage - x29y20z0" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y20z0.c",
  "north" : DIR+"/rooms/x29y21z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crappy sales material in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
