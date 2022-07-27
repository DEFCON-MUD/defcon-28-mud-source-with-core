inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 48, 5 }));
  set_short( "Hallway - x39y48z5" );
set_objects( DIR+"/monsters/sewerboss.c");
 set_exits( ([
  "south" : DIR+"/rooms/x39y47z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
