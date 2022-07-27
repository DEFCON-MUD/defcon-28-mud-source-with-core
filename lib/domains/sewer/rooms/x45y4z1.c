inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 4, 1 }));
  set_short( "Hallway - x45y4z1" );
set_objects( DIR+"/monsters/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y4z1.c",
  "east" : DIR+"/rooms/x46y4z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
