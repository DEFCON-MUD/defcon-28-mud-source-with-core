inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 30, 9 }));
  set_short( "Passage - x7y30z9" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y30z9.c",
  "south" : DIR+"/rooms/x7y29z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
