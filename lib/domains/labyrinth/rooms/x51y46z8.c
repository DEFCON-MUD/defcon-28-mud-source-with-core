inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 46, 8 }));
  set_short( "Corridor - x51y46z8" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y46z8.c",
  "north" : DIR+"/rooms/x51y47z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
