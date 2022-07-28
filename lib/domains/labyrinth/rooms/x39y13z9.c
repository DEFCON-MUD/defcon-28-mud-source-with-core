inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 13, 9 }));
  set_short( "Hallway - x39y13z9" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y14z9.c",
  "south" : DIR+"/rooms/x39y12z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
