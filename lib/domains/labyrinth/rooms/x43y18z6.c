inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 18, 6 }));
  set_short( "Corridor - x43y18z6" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y19z6.c",
  "south" : DIR+"/rooms/x43y17z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
