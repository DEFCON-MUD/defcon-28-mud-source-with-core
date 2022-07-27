inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 48, 8 }));
  set_short( "Hallway - x43y48z8" );
set_objects( DIR+"/monsters/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y48z8.c",
  "east" : DIR+"/rooms/x44y48z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
