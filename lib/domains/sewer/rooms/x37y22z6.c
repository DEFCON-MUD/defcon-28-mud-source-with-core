inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 22, 6 }));
  set_short( "Corridor - x37y22z6" );
set_objects( DIR+"/monsters/vampire.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y22z6.c",
  "north" : DIR+"/rooms/x37y23z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
