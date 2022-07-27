inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 51, 9 }));
  set_short( "Passage - x31y51z9" );
set_objects( DIR+"/monsters/maintenaedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y52z9.c",
  "south" : DIR+"/rooms/x31y50z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
