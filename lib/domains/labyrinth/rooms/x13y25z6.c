inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 25, 6 }));
  set_short( "Hallway - x13y25z6" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y26z6.c",
  "south" : DIR+"/rooms/x13y24z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
