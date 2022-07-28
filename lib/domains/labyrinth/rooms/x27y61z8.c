inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 61, 8 }));
  set_short( "Hallway - x27y61z8" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y62z8.c",
  "south" : DIR+"/rooms/x27y60z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
