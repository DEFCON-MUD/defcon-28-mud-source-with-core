inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 60, 4 }));
  set_short( "Corridor - x43y60z4" );
set_objects( DIR+"/monsters/autobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y60z4.c",
  "north" : DIR+"/rooms/x43y61z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
