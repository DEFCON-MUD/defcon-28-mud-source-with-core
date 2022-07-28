inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 38, 1 }));
  set_short( "Passage - x8y38z1" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y38z1.c",
  "east" : DIR+"/rooms/x9y38z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
