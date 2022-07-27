inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 33, 5 }));
  set_short( "Hallway - x49y33z5" );
set_objects( DIR+"/monsters/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y34z5.c",
  "south" : DIR+"/rooms/x49y32z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
