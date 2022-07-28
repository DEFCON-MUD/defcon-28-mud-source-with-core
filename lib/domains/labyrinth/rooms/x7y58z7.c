inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 58, 7 }));
  set_short( "Hallway - x7y58z7" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y59z7.c",
  "south" : DIR+"/rooms/x7y57z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
