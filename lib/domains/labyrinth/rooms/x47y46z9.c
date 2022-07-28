inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 46, 9 }));
  set_short( "Corridor - x47y46z9" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y46z9.c",
  "north" : DIR+"/rooms/x47y47z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
