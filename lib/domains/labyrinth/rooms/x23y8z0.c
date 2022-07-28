inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 8, 0 }));
  set_short( "Passage - x23y8z0" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y8z0.c",
  "north" : DIR+"/rooms/x23y9z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
