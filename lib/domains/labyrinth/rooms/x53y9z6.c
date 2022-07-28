inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 9, 6 }));
  set_short( "Corridor - x53y9z6" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y10z6.c",
  "south" : DIR+"/rooms/x53y8z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
