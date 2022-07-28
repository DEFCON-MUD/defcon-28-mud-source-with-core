inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 37, 2 }));
  set_short( "Corridor - x31y37z2" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y38z2.c",
  "south" : DIR+"/rooms/x31y36z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
