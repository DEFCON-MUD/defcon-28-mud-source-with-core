inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 39, 6 }));
  set_short( "Corridor - x19y39z6" );
set_objects( DIR+"/monsters/raddgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y40z6.c",
  "south" : DIR+"/rooms/x19y38z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
