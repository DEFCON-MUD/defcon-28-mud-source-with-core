inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 59, 4 }));
  set_short( "Corridor - x51y59z4" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y60z4.c",
  "south" : DIR+"/rooms/x51y58z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
