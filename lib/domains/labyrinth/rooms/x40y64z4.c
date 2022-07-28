inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 64, 4 }));
  set_short( "Passage - x40y64z4" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y64z4.c",
  "east" : DIR+"/rooms/x41y64z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
