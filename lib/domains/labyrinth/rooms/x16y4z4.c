inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 4, 4 }));
  set_short( "Passage - x16y4z4" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y4z4.c",
  "east" : DIR+"/rooms/x17y4z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
