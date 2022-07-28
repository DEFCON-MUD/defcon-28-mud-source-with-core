inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 31, 3 }));
  set_short( "Passage - x53y31z3" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y32z3.c",
  "south" : DIR+"/rooms/x53y30z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
