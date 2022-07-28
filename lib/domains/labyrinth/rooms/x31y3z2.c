inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 3, 2 }));
  set_short( "Passage - x31y3z2" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y4z2.c",
  "south" : DIR+"/rooms/x31y2z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
