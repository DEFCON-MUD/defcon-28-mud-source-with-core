inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 60, 4 }));
  set_short( "Corridor - x8y60z4" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y60z4.c",
  "east" : DIR+"/rooms/x9y60z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the radioactive waste in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
