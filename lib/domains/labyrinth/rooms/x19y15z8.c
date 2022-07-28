inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 15, 8 }));
  set_short( "Hallway - x19y15z8" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y16z8.c",
  "south" : DIR+"/rooms/x19y14z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
