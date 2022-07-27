inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 25, 8 }));
  set_short( "Passage - x43y25z8" );
set_objects( DIR+"/monsters/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y26z8.c",
  "south" : DIR+"/rooms/x43y24z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
