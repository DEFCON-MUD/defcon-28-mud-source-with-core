inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 14, 2 }));
  set_short( "Corridor - x25y14z2" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y14z2.c",
  "south" : DIR+"/rooms/x25y13z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
