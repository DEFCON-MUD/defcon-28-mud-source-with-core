inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 12, 8 }));
  set_short( "Passage - x25y12z8" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y12z8.c",
  "north" : DIR+"/rooms/x25y13z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
