inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 53, 6 }));
  set_short( "Passage - x37y53z6" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y54z6.c",
  "south" : DIR+"/rooms/x37y52z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
