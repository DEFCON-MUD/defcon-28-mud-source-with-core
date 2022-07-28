inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 26, 7 }));
  set_short( "Passage - x56y26z7" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y26z7.c",
  "east" : DIR+"/rooms/x57y26z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
