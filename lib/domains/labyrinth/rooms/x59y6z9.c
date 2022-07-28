inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 6, 9 }));
  set_short( "Corridor - x59y6z9" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y6z9.c",
  "east" : DIR+"/rooms/x60y6z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
