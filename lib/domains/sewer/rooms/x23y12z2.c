inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 12, 2 }));
  set_short( "Passage - x23y12z2" );
set_objects( DIR+"/monsters/enfoer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y12z2.c",
  "north" : DIR+"/rooms/x23y13z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
