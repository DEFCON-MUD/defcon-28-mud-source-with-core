inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 50, 7 }));
  set_short( "Passage - x34y50z7" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y50z7.c",
  "east" : DIR+"/rooms/x35y50z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
