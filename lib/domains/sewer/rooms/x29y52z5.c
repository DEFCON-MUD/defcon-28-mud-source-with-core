inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 52, 5 }));
  set_short( "Passage - x29y52z5" );
set_objects( DIR+"/monsters/th.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y52z5.c",
  "south" : DIR+"/rooms/x29y51z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the radioactive waste in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
