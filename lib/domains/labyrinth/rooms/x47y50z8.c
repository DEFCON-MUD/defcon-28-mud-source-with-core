inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 50, 8 }));
  set_short( "Passage - x47y50z8" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y50z8.c",
  "south" : DIR+"/rooms/x47y49z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
