inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 6, 9 }));
  set_short( "Corridor - x18y6z9" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y6z9.c",
  "east" : DIR+"/rooms/x19y6z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
