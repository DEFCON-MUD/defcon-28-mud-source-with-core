inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 52, 8 }));
  set_short( "Hallway - x7y52z8" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y52z8.c",
  "south" : DIR+"/rooms/x7y51z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
