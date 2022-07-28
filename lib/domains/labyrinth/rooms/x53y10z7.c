inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 10, 7 }));
  set_short( "Corridor - x53y10z7" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y10z7.c",
  "north" : DIR+"/rooms/x53y11z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
