inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 37, 9 }));
  set_short( "Passage - x9y37z9" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y38z9.c",
  "south" : DIR+"/rooms/x9y36z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
