inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 52, 0 }));
  set_short( "Passage - x47y52z0" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y52z0.c",
  "south" : DIR+"/rooms/x47y51z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
