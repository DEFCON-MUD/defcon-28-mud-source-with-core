inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 16, 9 }));
  set_short( "Hallway - x57y16z9" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y16z9.c",
  "north" : DIR+"/rooms/x57y17z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
