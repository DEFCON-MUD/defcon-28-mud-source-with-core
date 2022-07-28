inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 24, 5 }));
  set_short( "Passage - x19y24z5" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y24z5.c",
  "north" : DIR+"/rooms/x19y25z5.c",
  "south" : DIR+"/rooms/x19y23z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
