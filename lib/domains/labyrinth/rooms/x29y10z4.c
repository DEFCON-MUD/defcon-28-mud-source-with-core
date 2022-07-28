inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 10, 4 }));
  set_short( "Passage - x29y10z4" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y11z4.c",
  "south" : DIR+"/rooms/x29y9z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
