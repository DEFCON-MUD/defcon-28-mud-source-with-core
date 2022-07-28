inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 41, 8 }));
  set_short( "Hallway - x59y41z8" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y42z8.c",
  "south" : DIR+"/rooms/x59y40z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
