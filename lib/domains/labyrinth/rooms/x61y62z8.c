inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 62, 8 }));
  set_short( "Corridor - x61y62z8" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y62z8.c",
  "south" : DIR+"/rooms/x61y61z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
