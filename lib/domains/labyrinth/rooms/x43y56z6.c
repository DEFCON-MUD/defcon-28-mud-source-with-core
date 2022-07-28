inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 56, 6 }));
  set_short( "Hallway - x43y56z6" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y56z6.c",
  "north" : DIR+"/rooms/x43y57z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
