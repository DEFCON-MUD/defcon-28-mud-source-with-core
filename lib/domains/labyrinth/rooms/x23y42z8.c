inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 42, 8 }));
  set_short( "Passage - x23y42z8" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y42z8.c",
  "north" : DIR+"/rooms/x23y43z8.c",
  "south" : DIR+"/rooms/x23y41z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
