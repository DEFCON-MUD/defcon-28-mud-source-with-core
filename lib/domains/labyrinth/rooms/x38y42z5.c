inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 42, 5 }));
  set_short( "Corridor - x38y42z5" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y42z5.c",
  "east" : DIR+"/rooms/x39y42z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
