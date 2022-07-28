inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 40, 4 }));
  set_short( "Passage - x47y40z4" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y40z4.c",
  "north" : DIR+"/rooms/x47y41z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
