inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 61, 1 }));
  set_short( "Passage - x19y61z1" );
set_objects( DIR+"/monsters/greenslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y62z1.c",
  "south" : DIR+"/rooms/x19y60z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
