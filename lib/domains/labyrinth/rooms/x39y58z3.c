inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 58, 3 }));
  set_short( "Passage - x39y58z3" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y58z3.c",
  "south" : DIR+"/rooms/x39y57z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
