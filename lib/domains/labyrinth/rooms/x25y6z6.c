inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 6, 6 }));
  set_short( "Passage - x25y6z6" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y6z6.c",
  "north" : DIR+"/rooms/x25y7z6.c",
  "south" : DIR+"/rooms/x25y5z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
