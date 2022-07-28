inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 62, 2 }));
  set_short( "Passage - x27y62z2" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y62z2.c",
  "south" : DIR+"/rooms/x27y61z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
