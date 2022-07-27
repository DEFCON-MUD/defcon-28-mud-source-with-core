inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 10, 4 }));
  set_short( "Passage - x23y10z4" );
set_objects( DIR+"/monsters/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y10z4.c",
  "east" : DIR+"/rooms/x24y10z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
