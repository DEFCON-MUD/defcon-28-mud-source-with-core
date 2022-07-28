inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 18, 0 }));
  set_short( "Hallway - x47y18z0" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y18z0.c",
  "south" : DIR+"/rooms/x47y17z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
