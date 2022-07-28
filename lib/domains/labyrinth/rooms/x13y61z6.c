inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 61, 6 }));
  set_short( "Passage - x13y61z6" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y62z6.c",
  "south" : DIR+"/rooms/x13y60z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
