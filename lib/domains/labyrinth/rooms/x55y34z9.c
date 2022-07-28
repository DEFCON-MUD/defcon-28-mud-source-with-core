inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 34, 9 }));
  set_short( "Hallway - x55y34z9" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y34z9.c",
  "south" : DIR+"/rooms/x55y33z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
