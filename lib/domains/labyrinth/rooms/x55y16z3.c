inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 16, 3 }));
  set_short( "Hallway - x55y16z3" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y16z3.c",
  "south" : DIR+"/rooms/x55y15z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the radioactive waste in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
