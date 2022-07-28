inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 36, 4 }));
  set_short( "Corridor - x37y36z4" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y36z4.c",
  "north" : DIR+"/rooms/x37y37z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
