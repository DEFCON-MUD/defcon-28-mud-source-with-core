inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 14, 4 }));
  set_short( "Corridor - x42y14z4" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y14z4.c",
  "east" : DIR+"/rooms/x43y14z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
