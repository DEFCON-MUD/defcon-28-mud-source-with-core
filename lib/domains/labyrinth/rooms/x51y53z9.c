inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 53, 9 }));
  set_short( "Passage - x51y53z9" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y54z9.c",
  "south" : DIR+"/rooms/x51y52z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
