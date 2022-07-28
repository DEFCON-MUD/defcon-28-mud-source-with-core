inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 26, 2 }));
  set_short( "Corridor - x5y26z2" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "south" : DIR+"/rooms/x5y25z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
