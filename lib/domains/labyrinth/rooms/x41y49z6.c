inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 49, 6 }));
  set_short( "Passage - x41y49z6" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y50z6.c",
  "south" : DIR+"/rooms/x41y48z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
