inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 33, 6 }));
  set_short( "Passage - x49y33z6" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y34z6.c",
  "south" : DIR+"/rooms/x49y32z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
