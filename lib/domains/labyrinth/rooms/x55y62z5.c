inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 62, 5 }));
  set_short( "Corridor - x55y62z5" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y62z5.c",
  "south" : DIR+"/rooms/x55y61z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
