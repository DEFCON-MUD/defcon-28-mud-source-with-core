inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 32, 0 }));
  set_short( "Corridor - x3y32z0" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y32z0.c",
  "south" : DIR+"/rooms/x3y31z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
