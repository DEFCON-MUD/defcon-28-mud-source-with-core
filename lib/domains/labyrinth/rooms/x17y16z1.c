inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 16, 1 }));
  set_short( "Passage - x17y16z1" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y16z1.c",
  "north" : DIR+"/rooms/x17y17z1.c",
  "south" : DIR+"/rooms/x17y15z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
