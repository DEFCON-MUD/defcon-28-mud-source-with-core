inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 33, 8 }));
  set_short( "Passage - x47y33z8" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y34z8.c",
  "south" : DIR+"/rooms/x47y32z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
