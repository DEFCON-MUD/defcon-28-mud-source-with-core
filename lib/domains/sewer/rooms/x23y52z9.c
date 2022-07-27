inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 52, 9 }));
  set_short( "Passage - x23y52z9" );
set_objects( DIR+"/monsters/r1alan.bak.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y52z9.c",
  "north" : DIR+"/rooms/x23y53z9.c",
  "south" : DIR+"/rooms/x23y51z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
