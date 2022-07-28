inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 23, 5 }));
  set_short( "Passage - x39y23z5" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y24z5.c",
  "south" : DIR+"/rooms/x39y22z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
