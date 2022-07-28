inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 41, 4 }));
  set_short( "Hallway - x19y41z4" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y42z4.c",
  "south" : DIR+"/rooms/x19y40z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
