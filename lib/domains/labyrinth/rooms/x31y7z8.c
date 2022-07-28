inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 7, 8 }));
  set_short( "Hallway - x31y7z8" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y8z8.c",
  "south" : DIR+"/rooms/x31y6z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
