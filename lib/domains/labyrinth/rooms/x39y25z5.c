inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 25, 5 }));
  set_short( "Passage - x39y25z5" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y26z5.c",
  "south" : DIR+"/rooms/x39y24z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
