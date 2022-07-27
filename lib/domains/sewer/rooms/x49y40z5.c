inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 40, 5 }));
  set_short( "Hallway - x49y40z5" );
set_objects( DIR+"/monsters/hore.c");
 set_exits( ([
  "south" : DIR+"/rooms/x49y39z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the radioactive waste in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
