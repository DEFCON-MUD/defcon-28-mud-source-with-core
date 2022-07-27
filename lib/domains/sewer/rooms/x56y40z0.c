inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 40, 0 }));
  set_short( "Passage - x56y40z0" );
set_objects( DIR+"/monsters/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y40z0.c",
  "east" : DIR+"/rooms/x57y40z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
