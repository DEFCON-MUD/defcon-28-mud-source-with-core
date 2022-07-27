inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 37, 9 }));
  set_short( "Passage - x59y37z9" );
set_objects( DIR+"/monsters/cyberslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y38z9.c",
  "south" : DIR+"/rooms/x59y36z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
