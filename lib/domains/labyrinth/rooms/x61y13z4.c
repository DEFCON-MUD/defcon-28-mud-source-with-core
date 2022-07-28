inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 13, 4 }));
  set_short( "Corridor - x61y13z4" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y14z4.c",
  "south" : DIR+"/rooms/x61y12z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
