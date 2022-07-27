inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 12, 0 }));
  set_short( "Corridor - x46y12z0" );
set_objects( DIR+"/monsters/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y12z0.c",
  "east" : DIR+"/rooms/x47y12z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
