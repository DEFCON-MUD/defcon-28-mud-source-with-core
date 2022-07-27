inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 52, 9 }));
  set_short( "Passage - x53y52z9" );
set_objects( DIR+"/monsters/ken.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y53z9.c",
  "south" : DIR+"/rooms/x53y51z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
