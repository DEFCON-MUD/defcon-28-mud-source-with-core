inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 12, 2 }));
  set_short( "Corridor - x45y12z2" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y13z2.c",
  "south" : DIR+"/rooms/x45y11z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
