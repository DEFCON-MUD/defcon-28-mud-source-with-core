inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 55, 7 }));
  set_short( "Passage - x61y55z7" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y56z7.c",
  "south" : DIR+"/rooms/x61y54z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crappy sales material in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
