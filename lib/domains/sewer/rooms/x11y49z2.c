inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 49, 2 }));
  set_short( "Corridor - x11y49z2" );
set_objects( DIR+"/monsters/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y50z2.c",
  "south" : DIR+"/rooms/x11y48z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
