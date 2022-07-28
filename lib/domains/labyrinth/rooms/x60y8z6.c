inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 8, 6 }));
  set_short( "Corridor - x60y8z6" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y8z6.c",
  "east" : DIR+"/rooms/x61y8z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
