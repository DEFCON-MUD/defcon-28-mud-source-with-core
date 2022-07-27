inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 40, 1 }));
  set_short( "Corridor - x9y40z1" );
set_objects( DIR+"/monsters/monzema.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y40z1.c",
  "north" : DIR+"/rooms/x9y41z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
