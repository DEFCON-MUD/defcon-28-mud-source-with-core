inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 62, 5 }));
  set_short( "Passage - x35y62z5" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y62z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east.%^RESET%^");
}
