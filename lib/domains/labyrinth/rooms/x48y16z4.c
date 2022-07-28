inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 16, 4 }));
  set_short( "Passage - x48y16z4" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y16z4.c",
  "east" : DIR+"/rooms/x49y16z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
