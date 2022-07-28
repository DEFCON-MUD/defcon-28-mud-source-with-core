inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 20, 6 }));
  set_short( "Hallway - x26y20z6" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y20z6.c",
  "east" : DIR+"/rooms/x27y20z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
