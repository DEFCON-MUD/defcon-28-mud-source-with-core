inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 26, 2 }));
  set_short( "Hallway - x53y26z2" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "south" : DIR+"/rooms/x53y25z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
