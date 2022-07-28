inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 50, 9 }));
  set_short( "Passage - x53y50z9" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y51z9.c",
  "south" : DIR+"/rooms/x53y49z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
