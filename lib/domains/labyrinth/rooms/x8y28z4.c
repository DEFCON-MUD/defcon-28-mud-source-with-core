inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 28, 4 }));
  set_short( "Passage - x8y28z4" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y28z4.c",
  "east" : DIR+"/rooms/x9y28z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
