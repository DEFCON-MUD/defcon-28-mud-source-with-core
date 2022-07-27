inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 18, 7 }));
  set_short( "Corridor - x19y18z7" );
set_objects( DIR+"/monsters/bouer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y18z7.c",
  "north" : DIR+"/rooms/x19y19z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
