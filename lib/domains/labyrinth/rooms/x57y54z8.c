inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 54, 8 }));
  set_short( "Corridor - x57y54z8" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y54z8.c",
  "north" : DIR+"/rooms/x57y55z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
