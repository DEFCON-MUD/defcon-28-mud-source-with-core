inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 28, 8 }));
  set_short( "Passage - x13y28z8" );
set_objects( DIR+"/monsters/wellin.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y28z8.c",
  "north" : DIR+"/rooms/x13y29z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
