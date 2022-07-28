inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 53, 0 }));
  set_short( "Hallway - x7y53z0" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y54z0.c",
  "south" : DIR+"/rooms/x7y52z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
