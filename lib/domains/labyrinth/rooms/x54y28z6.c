inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 28, 6 }));
  set_short( "Passage - x54y28z6" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y28z6.c",
  "east" : DIR+"/rooms/x55y28z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crappy sales material in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
