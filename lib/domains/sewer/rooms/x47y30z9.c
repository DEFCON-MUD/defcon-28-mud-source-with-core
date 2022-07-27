inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 30, 9 }));
  set_short( "Corridor - x47y30z9" );
set_objects( DIR+"/monsters/jkie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y30z9.c",
  "north" : DIR+"/rooms/x47y31z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
