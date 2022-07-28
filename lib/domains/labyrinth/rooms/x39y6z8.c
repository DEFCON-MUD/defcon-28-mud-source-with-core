inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 6, 8 }));
  set_short( "Passage - x39y6z8" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y6z8.c",
  "east" : DIR+"/rooms/x40y6z8.c",
  "north" : DIR+"/rooms/x39y7z8.c",
  "south" : DIR+"/rooms/x39y5z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
