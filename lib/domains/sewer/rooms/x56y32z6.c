inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 32, 6 }));
  set_short( "Hallway - x56y32z6" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y32z6.c",
  "east" : DIR+"/rooms/x57y32z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
