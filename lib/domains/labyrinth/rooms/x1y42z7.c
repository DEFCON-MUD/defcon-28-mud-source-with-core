inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 42, 7 }));
  set_short( "Passage - x1y42z7" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y42z7.c",
  "south" : DIR+"/rooms/x1y41z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crappy sales material in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
