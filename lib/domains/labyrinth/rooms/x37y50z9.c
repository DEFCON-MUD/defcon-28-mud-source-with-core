inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 50, 9 }));
  set_short( "Passage - x37y50z9" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y50z9.c",
  "south" : DIR+"/rooms/x37y49z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
