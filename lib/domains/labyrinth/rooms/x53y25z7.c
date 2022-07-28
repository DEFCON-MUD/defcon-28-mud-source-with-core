inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 25, 7 }));
  set_short( "Passage - x53y25z7" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y26z7.c",
  "south" : DIR+"/rooms/x53y24z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
