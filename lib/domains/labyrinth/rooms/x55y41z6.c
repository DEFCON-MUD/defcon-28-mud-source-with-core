inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 41, 6 }));
  set_short( "Hallway - x55y41z6" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y42z6.c",
  "south" : DIR+"/rooms/x55y40z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
