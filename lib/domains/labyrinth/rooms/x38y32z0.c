inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 32, 0 }));
  set_short( "Passage - x38y32z0" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y32z0.c",
  "east" : DIR+"/rooms/x39y32z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
