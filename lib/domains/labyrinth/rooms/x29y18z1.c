inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 18, 1 }));
  set_short( "Hallway - x29y18z1" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y18z1.c",
  "east" : DIR+"/rooms/x30y18z1.c",
  "south" : DIR+"/rooms/x29y17z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
