inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 12, 8 }));
  set_short( "Corridor - x35y12z8" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y13z8.c",
  "south" : DIR+"/rooms/x35y11z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
