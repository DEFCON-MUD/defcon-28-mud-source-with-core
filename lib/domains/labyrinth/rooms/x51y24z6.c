inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 24, 6 }));
  set_short( "Corridor - x51y24z6" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y24z6.c",
  "east" : DIR+"/rooms/x52y24z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
