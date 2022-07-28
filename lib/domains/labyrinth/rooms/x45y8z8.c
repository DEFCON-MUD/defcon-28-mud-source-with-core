inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 8, 8 }));
  set_short( "Corridor - x45y8z8" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y8z8.c",
  "north" : DIR+"/rooms/x45y9z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
