inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 50, 1 }));
  set_short( "Passage - x31y50z1" );
set_objects( DIR+"/monsters/zaryem.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y50z1.c",
  "north" : DIR+"/rooms/x31y51z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
