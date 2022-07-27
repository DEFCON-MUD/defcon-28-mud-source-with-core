inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 17, 3 }));
  set_short( "Passage - x49y17z3" );
set_objects( DIR+"/monsters/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y18z3.c",
  "south" : DIR+"/rooms/x49y16z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
