inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 46, 5 }));
  set_short( "Corridor - x35y46z5" );
set_objects( DIR+"/monsters/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y46z5.c",
  "north" : DIR+"/rooms/x35y47z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
