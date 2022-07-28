inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 22, 1 }));
  set_short( "Passage - x18y22z1" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y22z1.c",
  "east" : DIR+"/rooms/x19y22z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
