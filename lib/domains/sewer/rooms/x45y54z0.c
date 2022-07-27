inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 54, 0 }));
  set_short( "Hallway - x45y54z0" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y54z0.c",
  "east" : DIR+"/rooms/x46y54z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
