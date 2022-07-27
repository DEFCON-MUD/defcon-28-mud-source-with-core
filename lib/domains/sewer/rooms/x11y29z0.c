inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 29, 0 }));
  set_short( "Corridor - x11y29z0" );
set_objects( DIR+"/monsters/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y30z0.c",
  "south" : DIR+"/rooms/x11y28z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
