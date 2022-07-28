inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 17, 7 }));
  set_short( "Corridor - x51y17z7" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y18z7.c",
  "south" : DIR+"/rooms/x51y16z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
