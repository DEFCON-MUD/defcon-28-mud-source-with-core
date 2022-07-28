inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 41, 2 }));
  set_short( "Corridor - x61y41z2" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y42z2.c",
  "south" : DIR+"/rooms/x61y40z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
