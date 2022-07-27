inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 41, 4 }));
  set_short( "Passage - x47y41z4" );
set_objects( DIR+"/monsters/warrior.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y42z4.c",
  "south" : DIR+"/rooms/x47y40z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
