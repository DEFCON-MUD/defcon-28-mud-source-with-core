inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 12, 6 }));
  set_short( "Corridor - x26y12z6" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y12z6.c",
  "east" : DIR+"/rooms/x27y12z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
