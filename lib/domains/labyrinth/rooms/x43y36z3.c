inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 36, 3 }));
  set_short( "Corridor - x43y36z3" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y36z3.c",
  "north" : DIR+"/rooms/x43y37z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
