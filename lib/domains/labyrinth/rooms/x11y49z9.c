inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 49, 9 }));
  set_short( "Passage - x11y49z9" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y50z9.c",
  "south" : DIR+"/rooms/x11y48z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
