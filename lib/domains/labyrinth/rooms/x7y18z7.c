inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 18, 7 }));
  set_short( "Passage - x7y18z7" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y18z7.c",
  "north" : DIR+"/rooms/x7y19z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
