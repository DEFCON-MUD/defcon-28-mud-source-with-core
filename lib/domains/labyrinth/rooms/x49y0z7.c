inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 0, 7 }));
  set_short( "Corridor - x49y0z7" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y0z7.c",
  "east" : DIR+"/rooms/x50y0z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
