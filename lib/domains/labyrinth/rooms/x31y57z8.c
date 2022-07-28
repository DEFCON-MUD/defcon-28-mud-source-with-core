inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 57, 8 }));
  set_short( "Corridor - x31y57z8" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y58z8.c",
  "south" : DIR+"/rooms/x31y56z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
