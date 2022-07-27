inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 20, 7 }));
  set_short( "Corridor - x43y20z7" );
set_objects( DIR+"/monsters/ccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y20z7.c",
  "north" : DIR+"/rooms/x43y21z7.c",
  "south" : DIR+"/rooms/x43y19z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
