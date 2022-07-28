inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 47, 9 }));
  set_short( "Corridor - x9y47z9" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y48z9.c",
  "south" : DIR+"/rooms/x9y46z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
