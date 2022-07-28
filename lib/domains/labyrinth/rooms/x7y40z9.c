inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 40, 9 }));
  set_short( "Hallway - x7y40z9" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y40z9.c",
  "north" : DIR+"/rooms/x7y41z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
