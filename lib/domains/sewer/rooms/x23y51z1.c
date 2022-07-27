inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 51, 1 }));
  set_short( "Passage - x23y51z1" );
set_objects( DIR+"/monsters/biddleman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y52z1.c",
  "south" : DIR+"/rooms/x23y50z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
