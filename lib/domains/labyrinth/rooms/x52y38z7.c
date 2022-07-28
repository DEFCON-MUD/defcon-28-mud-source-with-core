inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 38, 7 }));
  set_short( "Passage - x52y38z7" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y38z7.c",
  "east" : DIR+"/rooms/x53y38z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
