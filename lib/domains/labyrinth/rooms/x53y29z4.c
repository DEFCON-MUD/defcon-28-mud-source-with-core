inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 29, 4 }));
  set_short( "Passage - x53y29z4" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y30z4.c",
  "south" : DIR+"/rooms/x53y28z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
