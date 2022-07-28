inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 24, 8 }));
  set_short( "Passage - x26y24z8" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y24z8.c",
  "east" : DIR+"/rooms/x27y24z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
