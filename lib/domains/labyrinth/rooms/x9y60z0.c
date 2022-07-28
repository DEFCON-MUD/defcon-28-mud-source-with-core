inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 60, 0 }));
  set_short( "Passage - x9y60z0" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y61z0.c",
  "south" : DIR+"/rooms/x9y59z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
