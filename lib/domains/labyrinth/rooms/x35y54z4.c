inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 54, 4 }));
  set_short( "Corridor - x35y54z4" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y54z4.c",
  "east" : DIR+"/rooms/x36y54z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
