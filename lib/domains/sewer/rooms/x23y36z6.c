inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 36, 6 }));
  set_short( "Hallway - x23y36z6" );
set_objects( DIR+"/monsters/bol.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y36z6.c",
  "north" : DIR+"/rooms/x23y37z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crappy sales material in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
