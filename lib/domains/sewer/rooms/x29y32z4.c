inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 32, 4 }));
  set_short( "Hallway - x29y32z4" );
set_objects( DIR+"/monsters/ratqueen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y32z4.c",
  "north" : DIR+"/rooms/x29y33z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
