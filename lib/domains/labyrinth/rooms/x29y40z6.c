inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 40, 6 }));
  set_short( "Corridor - x29y40z6" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y40z6.c",
  "north" : DIR+"/rooms/x29y41z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
