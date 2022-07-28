inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 56, 8 }));
  set_short( "Corridor - x29y56z8" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y56z8.c",
  "north" : DIR+"/rooms/x29y57z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
