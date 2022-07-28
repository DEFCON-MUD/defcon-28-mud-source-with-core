inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 26, 4 }));
  set_short( "Corridor - x49y26z4" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y26z4.c",
  "south" : DIR+"/rooms/x49y25z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
