inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 44, 2 }));
  set_short( "Corridor - x58y44z2" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y44z2.c",
  "east" : DIR+"/rooms/x59y44z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
