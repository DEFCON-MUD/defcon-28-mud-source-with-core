inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 42, 2 }));
  set_short( "Hallway - x27y42z2" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "south" : DIR+"/rooms/x27y41z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
