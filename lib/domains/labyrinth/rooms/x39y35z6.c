inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 35, 6 }));
  set_short( "Corridor - x39y35z6" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y36z6.c",
  "south" : DIR+"/rooms/x39y34z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
