inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 43, 7 }));
  set_short( "Passage - x33y43z7" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y44z7.c",
  "south" : DIR+"/rooms/x33y42z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
