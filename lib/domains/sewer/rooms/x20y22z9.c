inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 22, 9 }));
  set_short( "Corridor - x20y22z9" );
set_objects( DIR+"/monsters/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y22z9.c",
  "east" : DIR+"/rooms/x21y22z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
