inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 3, 7 }));
  set_short( "Hallway - x17y3z7" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y4z7.c",
  "south" : DIR+"/rooms/x17y2z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
