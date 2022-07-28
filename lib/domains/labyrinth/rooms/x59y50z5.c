inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 50, 5 }));
  set_short( "Passage - x59y50z5" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y50z5.c",
  "south" : DIR+"/rooms/x59y49z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
