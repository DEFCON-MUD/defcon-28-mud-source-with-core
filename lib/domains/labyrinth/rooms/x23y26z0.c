inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 26, 0 }));
  set_short( "Passage - x23y26z0" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y27z0.c",
  "south" : DIR+"/rooms/x23y25z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
