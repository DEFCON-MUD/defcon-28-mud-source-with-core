inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 4, 2 }));
  set_short( "Hallway - x59y4z2" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y4z2.c",
  "south" : DIR+"/rooms/x59y3z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
