inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 18, 5 }));
  set_short( "Passage - x43y18z5" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y18z5.c",
  "north" : DIR+"/rooms/x43y19z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
