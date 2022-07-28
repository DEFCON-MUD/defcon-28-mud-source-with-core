inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 47, 5 }));
  set_short( "Hallway - x41y47z5" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y48z5.c",
  "south" : DIR+"/rooms/x41y46z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
