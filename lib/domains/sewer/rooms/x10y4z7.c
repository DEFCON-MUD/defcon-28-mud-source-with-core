inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 4, 7 }));
  set_short( "Hallway - x10y4z7" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y4z7.c",
  "east" : DIR+"/rooms/x11y4z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
