inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 17, 0 }));
  set_short( "Corridor - x19y17z0" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y18z0.c",
  "south" : DIR+"/rooms/x19y16z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
