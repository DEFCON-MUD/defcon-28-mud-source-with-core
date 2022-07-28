inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 34, 6 }));
  set_short( "Hallway - x47y34z6" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y34z6.c",
  "south" : DIR+"/rooms/x47y33z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
