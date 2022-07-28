inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 7, 2 }));
  set_short( "Hallway - x11y7z2" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y8z2.c",
  "south" : DIR+"/rooms/x11y6z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
