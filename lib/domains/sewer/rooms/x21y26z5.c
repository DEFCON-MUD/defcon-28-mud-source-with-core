inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 26, 5 }));
  set_short( "Corridor - x21y26z5" );
set_objects( DIR+"/monsters/rattlesnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y26z5.c",
  "south" : DIR+"/rooms/x21y25z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
