inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 61, 6 }));
  set_short( "Passage - x23y61z6" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y62z6.c",
  "south" : DIR+"/rooms/x23y60z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
