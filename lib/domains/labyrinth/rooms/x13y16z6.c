inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 16, 6 }));
  set_short( "Passage - x13y16z6" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y16z6.c",
  "north" : DIR+"/rooms/x13y17z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
