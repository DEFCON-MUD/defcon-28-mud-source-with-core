inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 64, 9 }));
  set_short( "Corridor - x21y64z9" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y64z9.c",
  "east" : DIR+"/rooms/x22y64z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
