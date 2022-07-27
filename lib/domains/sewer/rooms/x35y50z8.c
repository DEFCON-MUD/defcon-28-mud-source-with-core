inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 50, 8 }));
  set_short( "Corridor - x35y50z8" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y50z8.c",
  "north" : DIR+"/rooms/x35y51z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crappy sales material in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
