inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 18, 8 }));
  set_short( "Passage - x21y18z8" );
set_objects( DIR+"/monsters/ratqueen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y19z8.c",
  "south" : DIR+"/rooms/x21y17z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
