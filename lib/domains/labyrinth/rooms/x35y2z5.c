inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 2, 5 }));
  set_short( "Passage - x35y2z5" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y2z5.c",
  "north" : DIR+"/rooms/x35y3z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
