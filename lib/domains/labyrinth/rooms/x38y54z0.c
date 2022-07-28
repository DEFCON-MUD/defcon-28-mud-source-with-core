inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 54, 0 }));
  set_short( "Hallway - x38y54z0" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y54z0.c",
  "east" : DIR+"/rooms/x39y54z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
