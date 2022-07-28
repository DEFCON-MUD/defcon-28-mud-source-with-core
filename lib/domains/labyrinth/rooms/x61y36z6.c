inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 36, 6 }));
  set_short( "Passage - x61y36z6" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y36z6.c",
  "north" : DIR+"/rooms/x61y37z6.c",
  "south" : DIR+"/rooms/x61y35z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
