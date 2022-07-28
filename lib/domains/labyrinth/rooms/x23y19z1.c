inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 19, 1 }));
  set_short( "Corridor - x23y19z1" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y20z1.c",
  "south" : DIR+"/rooms/x23y18z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
