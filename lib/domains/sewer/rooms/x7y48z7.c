inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 48, 7 }));
  set_short( "Hallway - x7y48z7" );
set_objects( DIR+"/monsters/daer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y48z7.c",
  "south" : DIR+"/rooms/x7y47z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
