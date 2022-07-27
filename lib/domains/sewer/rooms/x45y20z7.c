inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 20, 7 }));
  set_short( "Hallway - x45y20z7" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y21z7.c",
  "south" : DIR+"/rooms/x45y19z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
