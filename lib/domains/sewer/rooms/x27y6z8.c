inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 6, 8 }));
  set_short( "Corridor - x27y6z8" );
set_objects( DIR+"/monsters/tinyweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y6z8.c",
  "north" : DIR+"/rooms/x27y7z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crappy sales material in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
