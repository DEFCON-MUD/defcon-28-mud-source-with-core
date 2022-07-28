inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 54, 3 }));
  set_short( "Corridor - x36y54z3" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y54z3.c",
  "east" : DIR+"/rooms/x37y54z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
