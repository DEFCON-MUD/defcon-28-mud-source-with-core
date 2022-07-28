inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 18, 9 }));
  set_short( "Hallway - x47y18z9" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y18z9.c",
  "south" : DIR+"/rooms/x47y17z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
