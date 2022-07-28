inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 58, 9 }));
  set_short( "Corridor - x53y58z9" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y58z9.c",
  "east" : DIR+"/rooms/x54y58z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
