inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 50, 7 }));
  set_short( "Corridor - x9y50z7" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y50z7.c",
  "north" : DIR+"/rooms/x9y51z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
