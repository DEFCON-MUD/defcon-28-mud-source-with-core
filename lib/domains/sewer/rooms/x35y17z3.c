inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 17, 3 }));
  set_short( "Passage - x35y17z3" );
set_objects( DIR+"/monsters/ken.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y18z3.c",
  "south" : DIR+"/rooms/x35y16z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
