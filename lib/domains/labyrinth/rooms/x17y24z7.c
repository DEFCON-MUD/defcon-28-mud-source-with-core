inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 24, 7 }));
  set_short( "Corridor - x17y24z7" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y24z7.c",
  "north" : DIR+"/rooms/x17y25z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
