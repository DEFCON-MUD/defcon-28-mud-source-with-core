inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 9, 1 }));
  set_short( "Passage - x57y9z1" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y10z1.c",
  "south" : DIR+"/rooms/x57y8z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
