inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 26, 5 }));
  set_short( "Corridor - x33y26z5" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y26z5.c",
  "south" : DIR+"/rooms/x33y25z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
