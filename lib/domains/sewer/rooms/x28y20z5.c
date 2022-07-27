inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 20, 5 }));
  set_short( "Hallway - x28y20z5" );
set_objects( DIR+"/monsters/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y20z5.c",
  "east" : DIR+"/rooms/x29y20z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
