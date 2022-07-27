inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 32, 5 }));
  set_short( "Corridor - x30y32z5" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y32z5.c",
  "east" : DIR+"/rooms/x31y32z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
