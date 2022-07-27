inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 14, 9 }));
  set_short( "Corridor - x58y14z9" );
set_objects( DIR+"/monsters/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y14z9.c",
  "east" : DIR+"/rooms/x59y14z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
