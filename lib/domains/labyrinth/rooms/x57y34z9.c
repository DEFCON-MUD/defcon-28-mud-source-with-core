inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 34, 9 }));
  set_short( "Corridor - x57y34z9" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y34z9.c",
  "south" : DIR+"/rooms/x57y33z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
