inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 56, 1 }));
  set_short( "Corridor - x25y56z1" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y56z1.c",
  "east" : DIR+"/rooms/x26y56z1.c",
  "south" : DIR+"/rooms/x25y55z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
