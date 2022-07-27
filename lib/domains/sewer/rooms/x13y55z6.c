inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 55, 6 }));
  set_short( "Hallway - x13y55z6" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y56z6.c",
  "south" : DIR+"/rooms/x13y54z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
