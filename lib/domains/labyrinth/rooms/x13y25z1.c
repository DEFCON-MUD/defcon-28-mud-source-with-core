inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 25, 1 }));
  set_short( "Passage - x13y25z1" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y26z1.c",
  "south" : DIR+"/rooms/x13y24z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
