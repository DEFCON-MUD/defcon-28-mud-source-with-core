inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 25, 1 }));
  set_short( "Corridor - x31y25z1" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y26z1.c",
  "south" : DIR+"/rooms/x31y24z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
