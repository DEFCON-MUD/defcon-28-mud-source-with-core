inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 38, 6 }));
  set_short( "Corridor - x23y38z6" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y38z6.c",
  "east" : DIR+"/rooms/x24y38z6.c",
  "north" : DIR+"/rooms/x23y39z6.c",
  "south" : DIR+"/rooms/x23y37z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, east, north, and west.%^RESET%^");
}
