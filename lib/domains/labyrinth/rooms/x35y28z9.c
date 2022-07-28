inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 28, 9 }));
  set_short( "Corridor - x35y28z9" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y28z9.c",
  "south" : DIR+"/rooms/x35y27z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
