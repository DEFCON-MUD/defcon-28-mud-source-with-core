inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 23, 2 }));
  set_short( "Corridor - x21y23z2" );
set_objects( DIR+"/monsters/constrtor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y24z2.c",
  "south" : DIR+"/rooms/x21y22z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the radioactive waste in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
