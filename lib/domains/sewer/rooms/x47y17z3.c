inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 17, 3 }));
  set_short( "Passage - x47y17z3" );
set_objects( DIR+"/monsters/enfoer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y18z3.c",
  "south" : DIR+"/rooms/x47y16z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
