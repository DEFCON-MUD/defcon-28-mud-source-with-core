inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 28, 1 }));
  set_short( "Hallway - x16y28z1" );
set_objects( DIR+"/monsters/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y28z1.c",
  "east" : DIR+"/rooms/x17y28z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
