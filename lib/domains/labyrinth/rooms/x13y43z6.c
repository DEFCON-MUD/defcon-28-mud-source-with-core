inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 43, 6 }));
  set_short( "Hallway - x13y43z6" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y44z6.c",
  "south" : DIR+"/rooms/x13y42z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
