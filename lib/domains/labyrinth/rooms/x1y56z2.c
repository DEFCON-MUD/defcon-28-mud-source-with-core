inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 56, 2 }));
  set_short( "Passage - x1y56z2" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y57z2.c",
  "south" : DIR+"/rooms/x1y55z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
