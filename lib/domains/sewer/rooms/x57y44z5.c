inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 44, 5 }));
  set_short( "Passage - x57y44z5" );
set_objects( DIR+"/monsters/professor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y44z5.c",
  "north" : DIR+"/rooms/x57y45z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
