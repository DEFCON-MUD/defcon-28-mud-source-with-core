inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 60, 9 }));
  set_short( "Hallway - x33y60z9" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y60z9.c",
  "north" : DIR+"/rooms/x33y61z9.c",
  "south" : DIR+"/rooms/x33y59z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
