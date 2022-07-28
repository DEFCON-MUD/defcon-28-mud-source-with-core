inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 30, 1 }));
  set_short( "Passage - x57y30z1" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y30z1.c",
  "north" : DIR+"/rooms/x57y31z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
