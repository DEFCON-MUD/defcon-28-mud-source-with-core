inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 24, 5 }));
  set_short( "Passage - x49y24z5" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "south" : DIR+"/rooms/x49y23z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
