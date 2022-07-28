inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 40, 1 }));
  set_short( "Hallway - x17y40z1" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y40z1.c",
  "east" : DIR+"/rooms/x18y40z1.c",
  "south" : DIR+"/rooms/x17y39z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
