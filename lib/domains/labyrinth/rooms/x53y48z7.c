inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 48, 7 }));
  set_short( "Passage - x53y48z7" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y48z7.c",
  "south" : DIR+"/rooms/x53y47z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
