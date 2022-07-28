inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 48, 7 }));
  set_short( "Hallway - x39y48z7" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y48z7.c",
  "south" : DIR+"/rooms/x39y47z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
