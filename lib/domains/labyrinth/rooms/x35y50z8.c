inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 50, 8 }));
  set_short( "Passage - x35y50z8" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y50z8.c",
  "north" : DIR+"/rooms/x35y51z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
