inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 45, 2 }));
  set_short( "Passage - x13y45z2" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y46z2.c",
  "south" : DIR+"/rooms/x13y44z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
