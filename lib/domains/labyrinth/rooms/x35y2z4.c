inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 2, 4 }));
  set_short( "Passage - x35y2z4" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y2z4.c",
  "east" : DIR+"/rooms/x36y2z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
