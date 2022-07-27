inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 38, 1 }));
  set_short( "Corridor - x47y38z1" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y38z1.c",
  "north" : DIR+"/rooms/x47y39z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
