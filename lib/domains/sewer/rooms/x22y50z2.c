inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 50, 2 }));
  set_short( "Hallway - x22y50z2" );
set_objects( DIR+"/monsters/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y50z2.c",
  "east" : DIR+"/rooms/x23y50z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
