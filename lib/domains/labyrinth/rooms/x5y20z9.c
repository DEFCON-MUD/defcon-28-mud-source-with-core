inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 20, 9 }));
  set_short( "Passage - x5y20z9" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y20z9.c",
  "north" : DIR+"/rooms/x5y21z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
