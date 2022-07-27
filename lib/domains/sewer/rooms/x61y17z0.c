inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 17, 0 }));
  set_short( "Hallway - x61y17z0" );
set_objects( DIR+"/monsters/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y18z0.c",
  "south" : DIR+"/rooms/x61y16z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
