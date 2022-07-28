inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 54, 5 }));
  set_short( "Corridor - x17y54z5" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y54z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east.%^RESET%^");
}
