inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 10, 6 }));
  set_short( "Passage - x48y10z6" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y10z6.c",
  "east" : DIR+"/rooms/x49y10z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
