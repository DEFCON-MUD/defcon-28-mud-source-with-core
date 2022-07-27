inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 24, 5 }));
  set_short( "Passage - x5y24z5" );
set_objects( DIR+"/monsters/snake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y24z5.c",
  "east" : DIR+"/rooms/x6y24z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
