inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 36, 1 }));
  set_short( "Passage - x33y36z1" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y36z1.c",
  "north" : DIR+"/rooms/x33y37z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
