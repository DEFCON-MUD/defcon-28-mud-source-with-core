inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 5, 6 }));
  set_short( "Passage - x13y5z6" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y6z6.c",
  "south" : DIR+"/rooms/x13y4z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
