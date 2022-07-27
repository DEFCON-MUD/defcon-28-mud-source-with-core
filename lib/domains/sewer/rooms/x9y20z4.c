inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 20, 4 }));
  set_short( "Corridor - x9y20z4" );
set_objects( DIR+"/monsters/clubbouer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y20z4.c",
  "north" : DIR+"/rooms/x9y21z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the radioactive waste in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
