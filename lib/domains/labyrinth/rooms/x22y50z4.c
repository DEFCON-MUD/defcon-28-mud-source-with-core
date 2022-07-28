inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 50, 4 }));
  set_short( "Passage - x22y50z4" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y50z4.c",
  "east" : DIR+"/rooms/x23y50z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
