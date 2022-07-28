inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 12, 4 }));
  set_short( "Passage - x25y12z4" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y12z4.c",
  "east" : DIR+"/rooms/x26y12z4.c",
  "north" : DIR+"/rooms/x25y13z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
