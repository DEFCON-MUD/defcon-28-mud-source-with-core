inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 28, 5 }));
  set_short( "Hallway - x35y28z5" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y28z5.c",
  "east" : DIR+"/rooms/x36y28z5.c",
  "north" : DIR+"/rooms/x35y29z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
