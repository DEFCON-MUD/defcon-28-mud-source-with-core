inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 32, 8 }));
  set_short( "Corridor - x49y32z8" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y32z8.c",
  "south" : DIR+"/rooms/x49y31z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
