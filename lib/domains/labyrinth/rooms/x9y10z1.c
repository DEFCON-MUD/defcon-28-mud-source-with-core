inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 10, 1 }));
  set_short( "Passage - x9y10z1" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y10z1.c",
  "north" : DIR+"/rooms/x9y11z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
