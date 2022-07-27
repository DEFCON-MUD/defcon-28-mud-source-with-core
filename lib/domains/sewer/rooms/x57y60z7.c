inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 60, 7 }));
  set_short( "Passage - x57y60z7" );
set_objects( DIR+"/monsters/vonnewman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y60z7.c",
  "north" : DIR+"/rooms/x57y61z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
