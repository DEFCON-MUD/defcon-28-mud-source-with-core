inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 31, 4 }));
  set_short( "Corridor - x23y31z4" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y32z4.c",
  "south" : DIR+"/rooms/x23y30z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
