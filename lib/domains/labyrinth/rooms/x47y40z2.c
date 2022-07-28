inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 40, 2 }));
  set_short( "Passage - x47y40z2" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y40z2.c",
  "south" : DIR+"/rooms/x47y39z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
