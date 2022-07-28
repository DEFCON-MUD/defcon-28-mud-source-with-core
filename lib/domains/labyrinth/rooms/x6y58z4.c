inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 58, 4 }));
  set_short( "Corridor - x6y58z4" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y58z4.c",
  "east" : DIR+"/rooms/x7y58z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
