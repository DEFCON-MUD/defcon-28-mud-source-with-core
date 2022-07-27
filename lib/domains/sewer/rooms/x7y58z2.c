inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 58, 2 }));
  set_short( "Hallway - x7y58z2" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y59z2.c",
  "south" : DIR+"/rooms/x7y57z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
