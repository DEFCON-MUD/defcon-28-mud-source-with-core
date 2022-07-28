inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 6, 8 }));
  set_short( "Hallway - x55y6z8" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y6z8.c",
  "east" : DIR+"/rooms/x56y6z8.c",
  "south" : DIR+"/rooms/x55y5z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
