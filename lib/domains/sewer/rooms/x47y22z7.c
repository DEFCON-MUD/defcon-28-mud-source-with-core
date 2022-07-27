inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 22, 7 }));
  set_short( "Hallway - x47y22z7" );
set_objects( DIR+"/monsters/glorzo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y23z7.c",
  "south" : DIR+"/rooms/x47y21z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
