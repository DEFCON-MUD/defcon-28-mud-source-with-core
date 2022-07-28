inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 24, 8 }));
  set_short( "Corridor - x40y24z8" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y24z8.c",
  "east" : DIR+"/rooms/x41y24z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
