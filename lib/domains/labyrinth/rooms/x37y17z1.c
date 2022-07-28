inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 17, 1 }));
  set_short( "Hallway - x37y17z1" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y18z1.c",
  "south" : DIR+"/rooms/x37y16z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
