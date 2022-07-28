inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 14, 9 }));
  set_short( "Corridor - x36y14z9" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y14z9.c",
  "east" : DIR+"/rooms/x37y14z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crappy sales material in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
