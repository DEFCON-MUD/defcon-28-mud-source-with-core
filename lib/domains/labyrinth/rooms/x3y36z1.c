inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 36, 1 }));
  set_short( "Corridor - x3y36z1" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y36z1.c",
  "south" : DIR+"/rooms/x3y35z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
