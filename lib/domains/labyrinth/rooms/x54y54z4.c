inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 54, 4 }));
  set_short( "Hallway - x54y54z4" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y54z4.c",
  "east" : DIR+"/rooms/x55y54z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
