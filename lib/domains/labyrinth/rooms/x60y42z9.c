inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 42, 9 }));
  set_short( "Passage - x60y42z9" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y42z9.c",
  "east" : DIR+"/rooms/x61y42z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
