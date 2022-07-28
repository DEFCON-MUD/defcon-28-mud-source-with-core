inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 62, 3 }));
  set_short( "Corridor - x35y62z3" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y62z3.c",
  "east" : DIR+"/rooms/x36y62z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
