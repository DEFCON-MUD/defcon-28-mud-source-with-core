inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 41, 9 }));
  set_short( "Corridor - x19y41z9" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y42z9.c",
  "south" : DIR+"/rooms/x19y40z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
