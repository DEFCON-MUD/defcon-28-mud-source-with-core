inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 2, 1 }));
  set_short( "Passage - x13y2z1" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y2z1.c",
  "north" : DIR+"/rooms/x13y3z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the glorzo in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
