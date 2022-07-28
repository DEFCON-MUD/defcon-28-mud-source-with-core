inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 63, 9 }));
  set_short( "Passage - x49y63z9" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y64z9.c",
  "south" : DIR+"/rooms/x49y62z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
