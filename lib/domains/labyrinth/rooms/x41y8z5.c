inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 8, 5 }));
  set_short( "Hallway - x41y8z5" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y8z5.c",
  "north" : DIR+"/rooms/x41y9z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
