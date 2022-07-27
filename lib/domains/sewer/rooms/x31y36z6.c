inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 36, 6 }));
  set_short( "Corridor - x31y36z6" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y36z6.c",
  "east" : DIR+"/rooms/x32y36z6.c",
  "south" : DIR+"/rooms/x31y35z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
