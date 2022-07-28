inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 48, 6 }));
  set_short( "Hallway - x1y48z6" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y49z6.c",
  "south" : DIR+"/rooms/x1y47z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
