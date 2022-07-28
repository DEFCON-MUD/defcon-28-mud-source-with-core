inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 55, 7 }));
  set_short( "Corridor - x3y55z7" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y56z7.c",
  "south" : DIR+"/rooms/x3y54z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
