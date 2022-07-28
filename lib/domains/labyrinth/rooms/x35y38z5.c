inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 38, 5 }));
  set_short( "Corridor - x35y38z5" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y38z5.c",
  "north" : DIR+"/rooms/x35y39z5.c",
  "south" : DIR+"/rooms/x35y37z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
