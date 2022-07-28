inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 38, 4 }));
  set_short( "Hallway - x37y38z4" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y38z4.c",
  "south" : DIR+"/rooms/x37y37z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
