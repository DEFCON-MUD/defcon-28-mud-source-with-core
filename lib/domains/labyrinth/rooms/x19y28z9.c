inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 28, 9 }));
  set_short( "Passage - x19y28z9" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y28z9.c",
  "north" : DIR+"/rooms/x19y29z9.c",
  "south" : DIR+"/rooms/x19y27z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
