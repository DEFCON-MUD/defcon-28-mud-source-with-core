inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 30, 5 }));
  set_short( "Corridor - x7y30z5" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y30z5.c",
  "south" : DIR+"/rooms/x7y29z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
