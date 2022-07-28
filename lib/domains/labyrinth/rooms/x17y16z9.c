inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 16, 9 }));
  set_short( "Hallway - x17y16z9" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y16z9.c",
  "north" : DIR+"/rooms/x17y17z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
