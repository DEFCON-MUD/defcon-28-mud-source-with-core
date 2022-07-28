inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 37, 1 }));
  set_short( "Passage - x19y37z1" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y38z1.c",
  "south" : DIR+"/rooms/x19y36z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
