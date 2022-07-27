inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 18, 5 }));
  set_short( "Passage - x17y18z5" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y18z5.c",
  "north" : DIR+"/rooms/x17y19z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
