inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 38, 1 }));
  set_short( "Corridor - x33y38z1" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y38z1.c",
  "south" : DIR+"/rooms/x33y37z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
